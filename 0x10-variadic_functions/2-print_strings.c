#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * print_strings - prints strings
  * @separator: separates between string values
  * @n: number of arguments
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	char *strng;

	va_list list;

	va_start(list, n);

	for (index =  0; index < n; index++)
	{
		strng = va_arg(list, char *);
		if (!strng)
		{
			strng = "nil";
		}
		if (!separator)
		{
			printf("%s", strng);
		}
		else if (separator && index == 0)
		{
			printf("%s", strng);
		}
		else
		{
			printf("%s%s", separator, strng);
		}
	}
	printf("\n");
	va_end(list);
}
