#include "main.h"

char my_string[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};

/**
 *  * main - print triple combos
 *   *
 *    * Description: print triple digit combos
 *     *
 *      * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	for (i = 0; i <= 8; ++i)

	{
		_putchar(my_string[i]);
	}

	return (0);
}
