#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - cocatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	char *output;
	int s1len = 0;
	int s2len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[1] != '\0'; i++)
		s2len++;
	output = malloc(sizeof(char) * (s1len + s2len) + 1);
	if (output == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		output[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		output[s1len + i] = s2[i];
	return (output);
}
