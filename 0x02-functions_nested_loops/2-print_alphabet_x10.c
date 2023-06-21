#include "main.h"
/**
 * print_alphabet_x10 - Make alphabet x10 times
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i <= 0)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
