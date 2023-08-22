#include "main.h"

/**
 * _printf - a function that prints anything
 *
 * @format: the format specifier
 *
 * Return: the length of given chars
*/

int _printf(const char *format, ...)
{
	unsigned int a = 0, len = 0;

	va_list list;

	va_start(list, format);

	for ( ; format[a] != '\0' ; a++)
	{
		if (format[a] != '%')
		{
			_putchar(format[a]);
		}
		else if (format[a + 1] == 'c')
		{
			_putchar(va_arg(list, int));
			a++;
		}
		else if (format[a + 1] == 's')
		{
			int r_len = print_string(va_arg(list, char *));

			a++;
			len += (r_len - 1);
		}
		else if (format[a + 1] == '%')
		{
			_putchar('%');
			a++;
		}
	}
	va_end(list);
	return (len);
}
