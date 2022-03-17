#include "main.h"

/**
 * more_numbers - print 0-15  10xand end with new line.
 *
 * Return: 0-15 10x and new line after
 */
void more_numbers(void)
{

int i;
	int x;

	for (x = 0; x < 10; x++)
	{
		i = 0;
		while (i <= 14)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
				_putchar(i % 10 + '0');
			i++;
		}
	_putchar('\n');
	}
}

