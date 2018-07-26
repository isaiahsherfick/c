#include <stdio.h>

int main()
{
	int numberOfTimesToLoop = 5;
	while (numberOfTimesToLoop > 0)
	{
		printf("\n\n loops left: %d\n\n", numberOfTimesToLoop - 1);
		numberOfTimesToLoop -= 1;
	}
	int secretNumber = 10;
       	int numberGuessed = 0;
	while (1)
	{
		printf("\n\nGuess My Secret Number: \n\n");
		scanf(" %d", &numberGuessed);
		if (numberGuessed == secretNumber)
		{
			printf("\n\nYou Got It\n\n");
			break;
		}
	}
	return 0;
}
