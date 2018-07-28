#include <stdio.h>
#include <string.h>

void main()
{
	printf("\n");

	int rand1 = 12, rand2 = 15;
	
	printf("rand1 = %p : rand2= %p\n\n", &rand1, &rand2);
	
	printf("rand1 = %d : rand2 = %d\n\n", &rand1, &rand2);	

	printf("Size of int %d\n\n", sizeof(rand1));

	printf("\n");
}
