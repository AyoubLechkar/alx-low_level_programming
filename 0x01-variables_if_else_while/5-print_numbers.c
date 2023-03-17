#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  *main - Entry point
  *Description: 'prints all single digit numbers of base 10'
  *Return: always 0 (success)
  */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
