#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{

	int primeNumbers[] = {2,3,5,7};

	printf("array: {");

	for (int i = 0; i < 4; i++)
	{
		if (i < 3)
		{
			printf("%d, ", primeNumbers[i]);
		}
		else
		{
			printf("%d)\n\n", primeNumbers[i]);
		}
	}

	printf("First index : %d\n\n", *primeNumbers);
	//So this works because the pointer of an array is the first index's pointer.
	
	printf("Second index : %d\n\n", *primeNumbers + 1);
	
	char * students[4] = {"Sally", "Mark", "Paul", "Sue"};

	for (int i = 0; i < 4; i++)
	{

		printf("%s : %p\n\n", students[i], &students[i]);

	}

	//////////////////////////////////////////////////////////////////////////////////
	
	void pointerRandomNums(int* rand1, int* rand2)
	{

		*rand1 = rand() % 50 + 1;
		*rand2 = rand() % 50 + 1;

		printf("New rand1 in function = %d\n\n", *rand1);

		printf("New rand2 in function = %d\n\n", *rand2);
		//go back to c tutorial 3 and watch this part again

	}	

	int rand1 = 0, rand2 = 0;

	pointerRandomNums(rand1, rand2);

	printf("rand1 = %d\n\n", &rand1);

	printf("rand2 = %d\n\n", &rand2);

	printf("\n");
}
