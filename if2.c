#include <stdio.h>

int main()
{
	printf("\n");
	int custAge = 38;
	char* legalAge = (custAge > 21) ? "true" : "false";
	printf("Is the customer of legal age? %s\n\n", legalAge);	
	return 0;
}
