//Simple C Program (Compound Interest.)
/*
Name:Kimani Keth Gachunu.
Registration Number:CT101/G/24892/24
Date:25/09/2025
Description:Simple compound interest code.
Formula:A=P(1+r/n)^(n*t).
*/

#include <stdio.h> //Pre-processor directive scanf(),printf().
#include <math.h> //for pow() function.

int main () {
	// variable declaration.
	double Principal;
	double Rate;  //rate of compunding 
	double Time; //Time for compounding taken 
	double Compound_Interest; //Total compound interest earned.
	double Amount; //Final amount after compounding.
	float n; // Number of times interest is pompounder yearly.
	
	// Inputing of values 
	printf("Enter principle amount(In Ksh eg...10000):");
	scanf("%lf", &Principal); 
	
	printf("Enter annual interest rate in%%:");
	scanf("%lf", &Rate); 
	
	printf("Enter time(in years): ");
	scanf("%lf", &Time);
	
	printf("Enter number of times interest is compounded yearly: ");
	scanf("%f", &n);
	
	// Conversion of rate into a decimal.
	Rate=Rate/100;  //converts the rate inputed into a decimal .
	
	//Formula A=P(1+r/n)^(n*t)
	Compound_Interest=Principal* pow((1+Rate/n),n*Time);
	
	//calculate total compound interest earned.
	Amount= Principal * pow((1+Rate/n),n*Time); 
	Compound_Interest= Amount-Principal;
	
	// display answer
	printf("\nFinal Amount after %.2lfyears: Ksh %.2lf\n", Time,Amount);
	printf("Compound_Interest: Ksh %.2lf\n", Compound_Interest);
	
	
	return 0;
}
