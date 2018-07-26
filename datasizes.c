#include <stdio.h>

int main()
{
	char* trueFalse = (sizeof(char) > 1) ? "bytes" : "byte";
	printf("\n\nA char takes up %d %s.\n\n", sizeof(char), trueFalse);
	printf("\n\nAn int takes up %d bytes.\n\n", sizeof(int));
	printf("\n\nA long takes up %d bytes.\n\n", sizeof(long));
	printf("\n\nA float takes up %d bytes.\n\n", sizeof(float));
	printf("\n\nA double takes up %d bytes.\n\n", sizeof(double));

	return 0;
}
