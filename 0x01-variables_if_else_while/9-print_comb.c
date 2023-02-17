#include <stdio.h>
/**
 * main - a program that prints all possible combinations of single-digit
 * numbers using only the putchar function four times
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(i + '0');
		if (i != 8)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
