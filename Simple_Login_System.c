//C Program (Simple Login System).
/*
Name:Kimani Keth Gachunu.
Registration Number:CT101/G/24892/24.
Date:09/10/2025.
Description:The program uses a do-while loop to repeatedly prompt the user for a password until it matches 1234.
*/

#include <stdio.h> //Pre Processor Directive printf(),scanf()
#include <strings.h> //For string comparison using strcmp.

int main(){
	char Password[20];//stores entered password.
	
		printf("\tSECURE LOGIN SYSTEM.\n"); //HEADING
	
	
	do{
		printf("Enter Password:\t"); //Input
		scanf("%s",Password); //user enters their password:either right or wrong.  
	}while(strcmp(Password, "1234")!= 0); //correct password.
	
	
	printf("Access Granted.\n"); //only outputted when the password is correct
	
	return 0;
}