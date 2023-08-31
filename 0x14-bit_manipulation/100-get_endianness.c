#include "main.h"
/**
  * get_endianness - checks if a machine is either
  * little or big endian
  * Return: 1 for little and 0 for big
  */
int get_endianness(void)
{
	unsigned int e = 1;
	char *c = (char *) &e;

	return (*c);
}
