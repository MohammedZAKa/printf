#include "main.h"

 int print_string(char *);

/**
 * _printf - a function that prints anything
 *
 * @format: the format specifier
 *
 * Return: the length of given chars
*/

int _printf(const char *format, ...)
{
	unsigned int len = 0, a = 0;
	va_list list;

	va_start(list, format);

	for ( ;  format[a]; a++)
	{
		if (format[a] != '%')
		{
			_putchar(va_arg(list, int));
			a++;
		}
		else if (format[a + 1] == 's')
		{
			int r_len = print_string(va_arg(list, char *));

			a++;
			len += r_len - 1;
		}
		else if (format[a + 1] == '%')
		{
			_putchar('%');
			a++;
		}
		else if (format[a + 1] == 'i' || format[a + 1] == 'd')
		{
			int size = find_digit(va_arg(list, int));

			if (format[a + 1] == 'i')
				convert_to_octal(va_arg(list, int));
			else
				print_number(va_arg(list, int));
			a++;
			len += (size - 1);
		}
		len++;
	}

	va_end(list);
	return (len);
}


/**
 *print_string - a function that prints anything
 *
 * @str: the format specifier
 *
 * Return: the length of given chars
*/

int print_string(char *str)
{
	int index = 0, number_of_char = 0;

	if (str)
	{
		while (str[index] != '\0')
		{
			_putchar(str[index]);
			number_of_char += 1;
			index++;
		}

	}

	return (number_of_char);
}
