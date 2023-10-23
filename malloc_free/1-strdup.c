#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - rtrns pntr 2 nwly alctd spc n mmry cntg cpy f d strng gvn as prmtr
 * @str: input string to be duplicated
 * Return: pointer to the duplicated string, or NULL on failure
 */
char *_strdup(char *str)
{
	char *duplicate;
	int length = 0;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}
	duplicate = (char *)malloc(length + 1);

	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}
	return (duplicate);
}
