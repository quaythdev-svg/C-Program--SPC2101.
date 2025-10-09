//C Program (Number Guessing Game.)
/*
Name:Kimani Keth Gachunu.
Registration Number:CT101/G/24892/24.
Date:09/10/2025.
Description:Program generates a random number between 1 and 20. The user guesses until correct.
*/

#include <stdio.h> //Pre-Processor Directive printf(),scanf().
#include <stdlib.h> // String Handling Function. srand()
#include <time.h> //Time library for time() seeds the random number generator.

int main(){
	int Secret;
	int Guess;
	int Attempts=0;
	
	srand(time(0)); //initialises random number generator.
	Secret =rand() % 20+1; //random number from 1 to 20.
	
	 // Using 'if-else if-else' statements to compare the user's guess with the secret number.
	while(1){
		printf("Enter your Guess (1-20):\t");
		scanf("%d", &Guess); //Reads users guess into the guess variable
		Attempts++;//increment number of guesses with every attempt.
		
		if(Guess>Secret){
			printf("Too High!");
			
		}else if(Guess<Secret){
			printf("Too Low!");
		}else
		{
			printf("Congratulations!You've guessed in %d Attempts.\n",Attempts);//congratulates user.
			break; //Exits the infinite loop when guess is correct.
		}		
		
		
	}
	
	return 0;
}