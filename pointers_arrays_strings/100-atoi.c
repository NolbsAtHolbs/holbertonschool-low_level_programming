#include "main.h"
/**
 * _atoi - converts string to integer
 * @s: the string
 * Return: int converted from string
 */
int _atoi(char *s)
{
	int i, b, n, yarn, v, tnum;

	i = 0;
	b = 0;
	n = 0;
	yarn = 0;
	v = 0;
	tnum = 0;

	while (s[yarn] != '\0')
		yarn++;

	while (i < yarn && v == 0)
	{
		if (s[i] == '-')
			++b;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (b % 2)
				tnum = -tnum;
			n = n * 10 + tnum;
			v = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			v = 0;
		}
		i++;
	}

	if (v == 0)
		return (0);

	return (n);
}
