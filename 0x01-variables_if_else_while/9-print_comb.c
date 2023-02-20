#include <stdio.h>

/**
 * main - Program prints all possible combinations of single-digit numbers
 * Return: Always 0
 */
int main(void)
{
	int i = 0;

	while (i < 5)
	{
		putchar(i + '0');
		if (i == 5)
			break;
		putchar(',');
		putchar(' ');
		i++;
	}

	putchar('\n');
	return (0);
}
