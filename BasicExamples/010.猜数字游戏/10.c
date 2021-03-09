#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
time()   defined in header <time.h>
rand()   defined in header <stdlib.h>, returns a pseudo-random integer value between [0,RAND_MAX].
srand()  defined in header <stdlib.h>, seeds the pseudo-random number generator used by rand() with the value seed.
RAND_MAX defined in header <stdlib.h>
 */
int main(void)
{
	int Number=0;

	srand(time(NULL)); // Use current time as seed for random generator
	
	int price = rand()/(RAND_MAX/100);

	if( price >100 || price <0){
		puts("Error: the price generated is not between [0,100].");
		return 0;
	}

	printf("\n====This is a Number Guess Game!====\n");

	// Guess the number
	while( Number!=price )
	{
		do{
			puts("Please input a number between 1 and 100: ");
			scanf("%d",&Number);
		}while( !(Number>=1 && Number<=100) );

		if( Number == price ){
			printf("\nYou are right! Bye Bye!\n");
		}
		else if( Number < price ){
			printf("Smaller!\n\n");
		}
		else if( Number > price )
			printf("Bigger!\n\n");

	}
	return 0;
}

