#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * op_add - adds
  * @a: var
  * @b: var2
  *
  * Return: sum
  */
int op_add(int a, int b)
{
	return (a + b);
}
/**
  * op_sub - subtracts
  * @a: var
  * @b: var2
  *
  * Return: result
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
  * op_mul - multiplies
  * @a: var
  * @b: var2
  *
  * Return: product
  */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
  * op_div - divides
  * @a: var
  * @b: var2
  *
  * Return: result
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}
/**
  * op_mod - modulo
  * @a: var
  * @b: var2
  *
  * Return: result
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
