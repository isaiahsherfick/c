#include <stdio.h>
#include <string.h>

void main()
{
	char wholeName[30] = "Isaiah Sherfick";
	int primeNumbers[3] = {2,3,5};
	int morePrimes[] = {13,17,19,23};
	
	for (int i = 0; i < 4; i++)
	{
		printf("\n\n%d is a prime number\n\n", primeNumbers[i]);
	}
	
	char otherString[] = "a";

	printf("\n\nThe output of strcmp(\"Isaiah Sherfick\",\"a\") is %d", strcmp(wholeName, otherString));
	printf("\n\nThis is because strcmp cares about alphabetical order and returns a positive number, a negative number, or zero.\n\n");
}
