#include "main.h"
#include <unistd.h>
/**
 * _putchar - To write the Char c  stdout
 * @c: Char to be printed
 *
 * Return: If successful, 1
 * On error, -1, errno - set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
