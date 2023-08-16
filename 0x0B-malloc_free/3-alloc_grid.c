#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - printing 2D array grids
 *
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int **wh, x, y;

	/* First check NULL */
	if (width <= 0 || height <= 0)
		return (NULL);

	wh = malloc(sizeof(int *) * height);
	if (wh == NULL)
		return (NULL);

	for (x = 0; x < height; ++x)
	{
		wh[x] = malloc(sizeof(int) * width);

		if (wh[x] == NULL)
		{
			for (; x >= 0; --x)
				free(wh[x]);

			free(wh);
			return (NULL);
		}
	} /* End of NULL */

	/* Then work with what you got */
	for (x = 0; x < height; ++x)
	{
		for (y = 0; y < width; ++y)
			wh[x][y] = 0;
	}

	return (wh);
}
