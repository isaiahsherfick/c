#include <stdio.h>

int main()
{
	printf("\n\"for(int i = 0; i < 10; i++)\": ");

	for(int i = 0; i < 10; i++)
	{
		printf("%d", i);
	}

	printf("\n\"for(int i = 0; i < 10; ++i)\": ");

	for(int i = 0; i < 10; ++i)
	{
		printf("%d", i);
	}

	printf("\n\"for(int i = 0; i <= 10; i++)\": ");

	for(int i = 0; i <=10; i++)
	{
		printf("%d", i);
	}

	printf("\n\"for(int i = 0; i <= 10; ++i)\": ");

	for(int i = 0; i <=10; ++i)
	{
		printf("%d", i);
	}

	printf("\n");

	return 0;
}
