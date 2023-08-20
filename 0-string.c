#include "main.h"

/**
 * _printf - a function that prints with %c and %s
 *
 * @format: the format
 *
 * Return: the number of printed chars
*/

int _printf(const char *format, ...)
{
	int r = 0;
	int n = 0;

	va_list vl;

	va_start(vl, format);

	while (format != NULL)
	{
		if (format[r] == '%')
			r++;
		else if (format[r] == 's')
		{
			char *string = va_arg(vl, char);

			putchar(s);
			n++;
		}
		else if (format[r] == 'c')
		{
			char c = va_arg(vl, char);

			putchar(c);
			n++;
		}
	}
	r++;
	return (n);
}
