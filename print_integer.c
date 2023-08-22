#include "main.h"

int get_num_size(int n);

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int n1;
	int ret;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	} else
	{
		n1 = n;
	}

	ret = get_num_size(n);
	if (ret == 0)
	{
		n1 = (short)n1;
	}
	else if (ret == 1)
	{
		n1 = (int)n1;
	}
	else
		n1 = (long)n1;

	if (n1 / 10)
	{
		print_number(n1 / 10);
	}

	_putchar((n1 % 10) + '0');
}

/**
 * get_num_size - get the size of number
 *
 * @n: integer to be printed
 *
 * Return: 0 in case of short
 * 1 in case of int
 * 2 in case of long
 */

int get_num_size(int n)
{
	unsigned int num;

	if (n < 0)
	{
		num = -n;
	}
	else
	{
		num = n;
	}
	if ((num >> 15) == 0)
		return (0);
	else if ((num >> 31) == 0)
		return (1);
	else
		return (2);
}

/**
 * find_digit -  find number of digits
 *
 * @num: integer to be finded
 *
 * Return: Always the number of digits
 */

int find_digit(int num)
{
	int count;
	int n;

	n = num;
	count = 0;

	while (n >= 10)
	{
		n /= 10;
		count++;
	}
	count++;
	return (count);
}

/**
 * first_digit - get the first digit of number
 *
 * @num: integer to find
 *
 * Return: Always the first digit
 */
int first_digit(int num)
{
	int n;

	n = num;

	while (n >= 10)
	{
		n /= 10;
	}

	return (n);
}

/**
 * convert_to_octal - convert number to octal
 *
 * @n: integer to convert
 */

void convert_to_octal(int n)
{
	int size, j, num, i;

	i = 0;
	num = n;
	size = find_digit(num);
	int oct[size + 1];

	while (num > 0)
	{
		oct[i] = num % 8;
		num /= 8;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(oct[j] + '0');
	}

}
