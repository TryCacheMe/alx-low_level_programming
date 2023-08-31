#include "main.h"
/**
  * get_bit - gives value of a bit at an index in decimal
  * @n: number to search
  * @index: index of the bit
  * Return: bit value
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitVal;

	if (index > 63)
		return (-1);
	bitVal = (n >> index) & 1;
	return (bitVal);
}
