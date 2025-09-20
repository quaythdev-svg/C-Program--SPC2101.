// Simple C Program(Attempt at Prompting a User.)
/*
Name:Kimani Keth Gachunu.
Registration Number:CT101/G/24892/24.
Date:20/09/2025.
Description:Trial simple prompt code that reads and displays inputed values.
*/

# include <stdio.h> // pre-processor directive printf(),scanf()

int main () {
	float Height;
	double Bank_Balance;
	char Phone_Number[20];// char array for phone number 
	
	//prompt and read values.
	
	//Height values.
	printf("Enter your height (in meters):");
	scanf("%f", &Height);
	
	//Bank Balance values.
	printf("Enter your Bank Balance (in Ksh) ");
	scanf("%lf", &Bank_Balance);
	
	//Phone number values.
	printf("Enter your Phone Number (in +2547xxxxxxxx)");
	scanf("%s", &Phone_Number);
	
	//Display entered values.
	
	//User information.
	printf("\n    KETH GACHUNU INFORMATION   \n");
	
	//Height displayed values.
	printf("Height: %.2f meters\n", Height);  //2 decimal places
	 
	//Bank Balance displayed values. 
	printf("BankBalance:KSh%.2lf\n", Bank_Balance);   //2 decimal place 

	//Phone Number displayed values.
	printf("PhoneNumber: +2547%s\n", Phone_Number);
	
	return 0;
}

