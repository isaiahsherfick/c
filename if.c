#include <stdio.h>
int main()
{
	int valueToTest1 = 1;
	int valueToTest2 = 2;
	int valueToTest3 = 3;

	if (valueToTest3 > valueToTest2)
	{
		//Should be true.
		printf("\n\n3 is indeed greater than 2.\n\n");
	}

	if (valueToTest1)
	{
		//99% sure this works.
		printf("\n\n1 does indeed evaluate to \"true\"\n\n");
	}

	else
	{
		printf("\n\n1 DOESN\'T indeed evaluate to \"true\"\n\n");
	}

	if (valueToTest2)
	{
		//Completely unsure on this one.
		printf("\n\nAny positive integer does indeed evaluate to \"true\"\n\n");
	}

	else
	{
		printf("\n\nOnly 1 evaluates to \"true\"\n\n");
	}

	if (0)
	{
		printf("\n\n0 evaluates to \"true\"???\n\n");
	}

	else
	{
		printf("\n\n0 indeed evaluates to \"false\"\n\n");
	}

	return 0;
}
