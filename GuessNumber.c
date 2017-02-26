#include <stdio.h>
#include <stdlib.h>

char UserInput[254];

int main(int argc, char *argv[])
{

	int UserGuess;
	int CorrectAnswer;
	time_t t;
	
	//initialize random number generator 
	srand((unsigned) time(&t));

	//set a random between 0 - 100 to the correct answer
	CorrectAnswer = rand() % 100;

	//setting a while loop until the correct answer is given 
	while(UserGuess != CorrectAnswer) {
		//getting a input for number between 1 and 100
		printf("Please input a number between 1 and 100\n");
		if(fgets(UserInput, sizeof(UserInput), stdin)) {
			if(1 == sscanf(UserInput, "%d", &UserGuess)) {
			}
		}
		
		//display too high if it is higher than the correct answer
		if(UserGuess > CorrectAnswer) {
			printf("Sorry Too High!\n");
		}
		else if(UserGuess < CorrectAnswer) {
			printf("Sorry to Low!\n");
		}
		else {
			printf("That is the Correct Answer!\n");
			printf("The number was %d\n", CorrectAnswer);
			break;
		}

	}


}

