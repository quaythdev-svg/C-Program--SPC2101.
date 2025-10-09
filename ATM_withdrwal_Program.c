//C Program (ATM Withdrawal Code)
/*
Name:Kimani Keth Gachunu.
Registration Number:CT101/G/24892/24.
Date:09/10/2025.
Description:The program uses a while loop to repeatedly prompt the user for a withdrawal amount and updates the account balance until it reaches zero.
*/

#include <stdio.h> //Pre-processor directive printf(),scanf().

int main(){
	float Balance;
	float Withdraw;
	
	//Input
	printf("Enter Initial Balance:\t");//initial balance for program to work with.
	scanf("%f", &Balance);

	while(Balance>0) //While loop
	{
		printf("Enter Amount You Want to Withdraw.\t");
		scanf("%f",&Withdraw);
		//Output
		Balance -= Withdraw;
		printf("Your Remainding Balance is:%.2f\n", Balance);
	}
	//Output
	printf("Your Balance Is Zero or Negative. Transaction Stopped.\n");
	return 0;
}