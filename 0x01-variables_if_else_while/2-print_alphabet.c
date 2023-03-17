#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  *main - Entry point
  *Description: 'print alphabet lowercase'
  *Return: always 0 (success)
  */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
