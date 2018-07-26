#include <stdio.h>
#include <stdlib.h>
//Needed for exit()

	void main()
	{
		int whatToDo = 0;

		do
		{
			printf("\n");
			printf("1. What time is it?\n");
			printf("2. what is today\'s date?\n");
			printf("3. What day is it?\n");
			printf("4. Quit\n");
			scanf(" %d", &whatToDo);
		}while(whatToDo < 1 || whatToDo > 4);
		
		switch(whatToDo) //Must be CHAR or INT
		{
			case(1) : printf("current time");
			  	break;
			case(2) : printf("today's date");
				break;
			case(3) : printf("current day");	  
				break;
			case(4) : printf("Bye bye!");
				  exit(0);
		}
		printf("\n");
	}
