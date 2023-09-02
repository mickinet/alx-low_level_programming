#include "main.h"

/**
 * clear_bit - Bit value to 0
 * @n: pointer number - change
 * @index: Bit index -clear
 *
 * Return: 1 if success and -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
