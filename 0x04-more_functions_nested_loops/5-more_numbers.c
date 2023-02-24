 #include "main.h"

/**
 * more_numbers - function for printing numbers
 *
 * Return: not in this function 0
 */

void more_numbers(void)
{
	int i, j;

	j = 10;
	while (j--)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar(1);
			_putchar(i % 10 + '0');
		}
        	_putchar('\n');
	}
}
