#include <stdio.h>
#include <libmy.a>
#include "main.h"
/**
  *
  */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
		return (0);
	}
	else
	{
		fprintf(stderr, "Unable to retrieve program name.\n");
		return (1);
	}
}
