#include <stdio.h>
#include "main.h"

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
