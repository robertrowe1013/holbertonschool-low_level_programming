#include "holberton.h"
#include <stdlib.h>
/**
  * alloc_grid - allocate grid
  * @width: width
  * @height: height
  *
  * Return: null on failure, null on dimension less than 1, else 0
  */
int **alloc_grid(int width, int height)
{
	int i;
	int i2;
	int **ar;

	if (width < 1 || height < 1)
		return (NULL);
	ar = (int **)malloc(height * sizeof(int *));
	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(width * sizeof(int));
		if (ar[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(ar[i]);
			free(ar);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (i2 = 0; i2 < width; i2++)
			ar[i][i2] = 0;

	return (ar);
}
