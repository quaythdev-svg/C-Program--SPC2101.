//Simple c program (loan Application)
/*
Name:Kimani Keth Gachunu.
Registration Number:CT101/G/24892/24.
Date:20/09/2025.
Description:Simple code on decision-making and conditional-excecution.
*/

#include <stdio.h> //Pre-processor directive scanf(), printf().

int main () {
	int Age;
	int Income;
	
	//Input age.
	printf("Enter your Age:");
	scanf("%d", &Age);
	
	//input Income
	printf("Enter you annual Income:");
	scanf("%d", &Income);
	
	//Collective Decision-making and conditional-excecution.
	if(Age >=18 && Income >= 21000) {  //&& stands for both conditions to be met.
		printf("Congratulations you qualify for a loan.");
	}else
	    printf("Unfortunately, we are unable to offer you a loan at this time.");
	    	    
		
	return 0;
}