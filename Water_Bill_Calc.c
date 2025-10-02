//Simple C Program (Water Bill Calculator).
/*
Name:Kimani Keth Gachunu
Registration Number:CT101/G/24892/24.
Date:2/10/2025
Description:A Simple Water Bill Calculator.
i. 0–30 units -20 KES per unit
ii. 31–60 units -25 KES per unit
iii. Above 60 units -30 KES per unit.
*/       

#include <stdio.h> //Pre-Processor Directive Scanf(),Printf().
int main (){
	float Units;
	float Bill=0; //initializes the bill to zero
	
	//input 
	printf("Enter the number of water units consumed:\t");
	if (scanf("%f",&Units) !=1 ||Units <0){
		printf("Invalid input,Please enter a positive integer.\n");
		return 1; //exits the program with error code 
	}
	
	//Processing 
	if (Units <=30){
		Bill=Units*20;
	}else if (Units <=60){
		Bill=Units*20;
	}else{
	    Bill=Units*30;
		}
		
    //output.
    printf("You Consumed %.2f Units.\n",Units);
    printf("Your total Water Bill is:%.2f KSH\n",Bill);
    
    return 0;
}