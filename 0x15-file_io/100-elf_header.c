#include "main.h"

void check_elf(unsigned char *a);
void print_magic(unsigned char *a);
void print_class(unsigned char *a);
void print_data(unsigned char *a);
void print_version(unsigned char *a);
void print_abi(unsigned char *a);
void print_osabi(unsigned char *a);
void print_type(unsigned int b, unsigned char *a);
void print_entry(unsigned long int b, unsigned char *a);
void close_elf(int elf);

/**
 * main - Displays the information contained ELF file.
 * @argc: number of arguments
 * @argv: Argument vector
 *
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);

	free(header);
	close_elf(o);
	return (0);
}


/**
 * check_elf - Checks if a file is an ELF file.
 * @a: A pointer to an array containing the ELF magic numbers.
 */

void check_elf(unsigned char *a)
{
	int z;

	for (z = 0; z < 4; ++z)
	{
		if (a[z] != 127 && a[z] != 'E' &&
				a[z] != 'L' && a[z] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * close_elf - Closes ELF file
 * @elf: The elf file
 */

void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * print_abi - prints ABI version
 * @a: pointer to ABI
 */

void print_abi(unsigned char *a)
{
	printf("  ABI Version:                       %d\n", a[EI_ABIVERSION]);
}

/**
 * print_osabi - prints the OS/ABI version
 * @a: pointer to OS/ABI
 */

void print_osabi(unsigned char *a)
{
	printf("  OS/ABI:                            ");
	switch (a[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("Unix - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("Unix - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("Unix - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("Unix - Linux\n");
			break;
		case ELFOSABI_ARM:
			printf("Unix - ARM\n");
			break;
		case ELFOSABI_TRU64:
			printf("Unix - TRU64\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("Unix - FreeBSD\n");
			break;
		case ELFOSABI_IRIX:
			printf("Unix - IRIX\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("Unix - Solaris\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", a[EI_OSABI]);
	}
}

/**
 * print_type - Prints ELF type
 * @b: ELF type
 * @a: pointer to ELF
 */

void print_type(unsigned int b, unsigned char *a)
{
	if (a[EI_DATA] == ELFDATA2MSB)
		b >>= 8;
	printf("  Type:                              ");

	switch (b)
	{
		case EV_NONE:
			printf("NONE (None)\n");
			break;
		case DT_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		default:
			printf("<unknown: %x>\n", b);
	}
}

/**
 * print_data - prints ELF header data
 * @a: pointer to ELF
 */

void print_data(unsigned char *a)
{
	printf("  Data:                              ");
	switch (a[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", a[EI_CLASS]);
	}
}

/**
 * print_class - prints ELF header class
 * @a: pointer to ELF class
 */

void print_class(unsigned char *a)
{
	printf("  Class:                             ");
	switch (a[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", a[EI_CLASS]);
	}
}

/**
 * print_magic - prints ELF header magic number
 * @a: pointer to ELF magic number
 */

void print_magic(unsigned char *a)
{
	int z;

	printf("  Magic:   ");
	for (z = 0; z < EI_NIDENT; ++z)
	{
		printf("%02x", a[z]);
		if (z == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_version - prints ELF header version
 * @a: pointer to ELF version
 */

void print_version(unsigned char *a)
{
	printf("  Version:                           %d", a[EI_VERSION]);
	switch (a[EI_VERSION])
	{
		case EV_CURRENT:
			printf("  (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
 * print_entry - prints ELF header entry point
 * @b: ELF entry address
 * @a: pointer to ELF entry
 */

void print_entry(unsigned long int b, unsigned char *a)
{
	printf("  Entry point address:               ");
	if (a[EI_DATA] == ELFDATA2MSB)
	{
		b = ((b << 8) & 0xFF00FF00) | ((b >> 8) & 0xFF00FF);
		b = (b << 16) | (b >> 16);
	}
	if (a[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)b);
	else
		printf("%#lx\n", b);
}
