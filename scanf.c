#include <stdio.h>
#include <string.h>

int main()
{
	char middleInitial;
	printf("\nWhat is your middle initial? \n\n");
	scanf("%c", &middleInitial);
	char firstName[30], lastName[30];
	printf("\nWhat is your full name?\n\n");
	scanf(" %s %s", firstName, lastName);
	printf("\nYour name is %s %c. %s\n\n", firstName, middleInitial, lastName);
	int month, day, year;
	printf("What's your birthday?\n\n");
	scanf(" %d/%d/%d", &day, &month, &year);
	printf("\nYour birthday is %d/%d/%d\n\n", day, month, year);
	return 0;
}
