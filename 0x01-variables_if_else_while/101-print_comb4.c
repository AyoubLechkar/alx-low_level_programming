#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  *main - Entry point
  *Description: 'prints all possible different combinations of three digits'
  *Return: always 0 (success)
  */
int main(void)
{
	int n, m, q;

	for (n = '0'; n < '9'; n++)
	{
		for (m = n + 1; m <= '9'; m++)
		{
			for (q = m + 1; q <= '9'; q++)
			{
				if ((m != n) != q)
				{
					putchar(n);
					putchar(m);
					putchar(q);
					if (n == '7' && m == '8')
					{
						continue;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
