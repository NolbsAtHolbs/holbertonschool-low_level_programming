#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

typedef void (*print_name_function)(char *);

void print_name(char *name, print_name_function f);

#endif
