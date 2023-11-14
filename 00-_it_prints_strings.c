#include "main.h"

/**
 * _printsString - It prints strings.
 * @words: arg that points to strings.
 *
 *
 * Return: count variable.
 */

int _printsString(char *words)
{
	int count = 0;

	while (*words != '\0')
	{
		_putchar(*words);
		words++;
		count++;
	}
	return (count);
}
