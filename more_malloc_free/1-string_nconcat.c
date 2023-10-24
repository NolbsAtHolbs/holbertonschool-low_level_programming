#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concats two strings up to n bytes of the second string
 * @s1: first string
 * @s2: second string
 * @n: maximum number of bytes from s2 to concatenate
 * Return: pointer to the newly allocated concatted string or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (len1 = 0; s1[len1]; len1++)
	{
		;
	}
	for (len2 = 0; s2[len2]; len2++)
	{
		;
	}
	if (n >= len2)
	{
		n = len2;
	}
	concatenated = (char *)malloc(len1 + n + 1);

	if (concatenated == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		concatenated[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
		concatenated[i] = s2[j];
	}
	concatenated[i] = '\0';
	return (concatenated);
}
