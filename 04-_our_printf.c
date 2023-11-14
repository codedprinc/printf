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
	int argc = 0;
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
				format++;
				_putchar(ract);
				argc++;
			}
			break;

			case 's':
			{
				char *sent = va_arg(c_n, char *);
				format++;
				_printsString(sent);
				argc += _strlen(sent);
			}
			break;

			case '%':
			{
				_putchar('%');
				format++;
				argc++;
			}
			break;

			case 'd':
			{
				int new = va_arg(c_n, int);
				format++;
				_printsNumbers(new);
				argc++;
			}
			break;

			case 'i':
			{
				int new = va_arg(c_n, int);
				format++;
				_printsNumbers(new);
				argc++;
			}
			break;

			default:
				fprintf(stderr, "Error: Unknown format\n");
				return (-1);
				break;
			}
		}
		else
		{
			_putchar(*format);
			format++;
			argc++;
		}
	}
	va_end(c_n);
	return (argc);
}
