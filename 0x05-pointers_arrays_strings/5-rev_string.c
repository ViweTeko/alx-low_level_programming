#include "main.h"

/**
 * rev_string - reverses the string
 *
 * @s: the string
 */

void rev_string(char *s)
{ 
	
	int t, u = 0;
	char v = s[0];
        
	while (s[u] != '\0')
		++u;

	for (t = 0; t < u; ++t)
	{
		--u;
		v = s[t];
		s[t] = s[u];
		s[u] = v;
	}
}
