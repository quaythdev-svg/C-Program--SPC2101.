//Simple C Program (Mobile Data Bundle Purchase).
/*
Name:Kimani Keth Gachunu
Registration Number:CT101/G/24892/24.
Date:2/10/2025
Description:Simple Code displays a mobile data menu, gives the user a choice and uses a switch statement to display the bundle selected and its cost. 
*/

#include <stdio.h>  //Pre-Processor Directive scanf(),Printf().

int main () {
	int Choice;
	
	//Display Menu.
	printf("\t MOBILE DATA BUNDLE MENU\n");
	printf("1. 100MB @  ksh50.\n");
	printf("2. 500MB @  ksh200.\n");
	printf("3. 1GB   @  ksh350.\n");
	printf("4. 2GB   @  ksh600.\n");
	printf("\t \n");
	
	//Input choice 
	//with simple input validation if user uses letters of invalid data. 
	printf("Enter your bundle choice:\t\n");
	if (scanf("%d", &Choice)!=1){
		printf("Invalid choice enter number between 1 and 4.\n");
		return 1;//exit program with error.
	}
	//Using switch case to decide bundle choice.
	switch(Choice)	{
	case 1:
		printf("You Have Selected 100MB Cost = ksh50.\n");
		break;
	case 2:
		printf("You Have Selected 500MB Cost = ksh200.\n");
		break;
	case 3:
		printf("You Have Selected 1GB Cost = ksh350.\n");
		break;
	case 4:
		printf("You Have Selected 2GB Cost = 600.\n");
		break;
	default:
		printf("Invalid choice enter number between 1 and 4.\n");//Handling invalid choice.
	}
	return 0;
}