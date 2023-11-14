#include "main.h"

/**
 * _printsNumbers - it prints numbers.
 * @n_n: arg that accepts numbers.
 *
 *
 * Return: variable i.
 */

int _printsNumbers(int n_n)
{
	int n = n_n;
	int num, i = 1;
	int la = n % 10, dig_t, ex = 1;

	n /= 10;
	num = n;

	if (la < 0)
	{
		_putchar('-');
		num -= num;
		n -= n;
		la -= la;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			ex *= 10;
			num /= 10;
		}
		num = n;
		while (ex > 0)
		{
			dig_t = num / ex;
			_putchar(dig_t + '0');
			num = num - ((dig_t) *(ex));
			ex /= 10;
			i++;
		}
	}
	_putchar(la + '0');
	return (i);
}
