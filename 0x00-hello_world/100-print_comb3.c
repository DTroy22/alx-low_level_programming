#include <stdio.h>
/**
 * main - main block
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
	int i, e;

	i = 48;
	e = 58;

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (e != i && e < i)
			{
				putchar(e);
				putchsr(i);
