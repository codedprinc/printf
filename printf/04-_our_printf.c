#include "main.h"


/**
 * _printf - prints characters, numbers to stdout.
 * @format: List of parametersto be passed to functions.
 * @...: A variable number of parameters to be printed.
 *
 * Return: The number of characters to stdout.
 */

int _printf(const char *format, ...)
{
	int co_a = 0;
	va_list c_n;

	va_start(c_n, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
			case 'c':
			{
				char ract = va_arg(c_n, int);

				_putchar(ract);
				co_a++;
			}
			break;

			case 's':
			{
				char *sent = va_arg(c_n, char *);

				_printsString(sent);
				co_a += _strlen(sent);
			}
			break;

			case '%':
			{
				_putchar('%');
				co_a++;
			}
			break;

			case 'd':
			{
				int new = va_arg(c_n, int);

				_printsNumbers(new);
				co_a++;
			}
			break;

			case 'i':
			{
				int new = va_arg(c_n, int);

				_printsNumbers(new);
				co_a++;
			}
			break;

			default:
				fprintf(stderr, "Error: Unknown format\n");
				return (-1);
			}
		}
		else
		{
			_putchar(*format);
			co_a++;
		}
		format++;
	}
	va_end(c_n);
	return (co_a);
}
