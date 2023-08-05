#include "main.h"

/**
 * get_endianness - checks if a machine is a little endian system or a big endian system
 * Return: 0 for big endian, 1 for little endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
