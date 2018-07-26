#include <stdio.h>

int main()
{
	int num1 = 12, num2 = 15, numAns;
	float decimal1 = 1.2, decimal2 = 1.5, decimalAns;
	printf("\n\nInteger calculation: %d + %d\n\n", num1, num2);
	printf("Answer: %d\n\n", num2 + num1);
	printf("Float calculation: %f + %f\n\n", decimal1, decimal2);
	printf("Answer: %f\n\n", decimal2 + decimal1);
	printf("Modulus calculation: %d % %d\n\n", num2, num1);
	printf("Answer: %d\n\n", num2 % num1);
	return 0;
}
