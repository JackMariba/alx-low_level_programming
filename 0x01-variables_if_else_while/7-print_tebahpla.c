#include <stdio.h>
/**
 * main - print alphabetsin reverse
 * Return: 0
 */
int main(void)
{
	int i;
	char alpa[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 26; i > 0; i--)
	{
		putchar(alpa[i]);
	}
	putchar('\n')
	return (0);
}
