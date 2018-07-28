#include <stdio.h>
//Needed for exit()
#include <stdlib.h>
//Needed for strings?
#include <string.h>

//This is a global variable
int globalVariable = 0;

//Here's a function
int addTwoIntegers(int num1, int num2)
{
	return num1 + num2;
}

void main()
{
	printf("\n");

	int total = addTwoIntegers(4,5);

	printf("The result of 4 + 5 is %d.", total);

	printf("\nThe value of the global variable is %d.", globalVariable);

	printf("\n");
}
