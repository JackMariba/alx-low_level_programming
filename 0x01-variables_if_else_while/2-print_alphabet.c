#include <stdio.h>
/**
 * main - print the alphabet
 * Return: 0
 */
int main(void)
{
	int i;
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; ++i)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
