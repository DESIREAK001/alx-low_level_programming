#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - copy string to new allocated space in memory
 * @str: string whose copy is to be allocated new space in memory
 * Return: pointer to the newly allocated space in memory
 */

char *_strdup(char *str)
{
	unsigned int i, k = 0;
	char *copy;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		k++;
	copy = malloc(sizeof(char) * (k + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	copy[i] = str[i];
	return (copy);
}
