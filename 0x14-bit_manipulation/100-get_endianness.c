#include "main.h"

/**
 * get_endianness - check
 * Return: big,0 little,1
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
