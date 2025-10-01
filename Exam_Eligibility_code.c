//Simple C Program (Exam Eligibility).
/*
Name:Kimani Keth Gachunu.
Registration Number:CT101/G/24892/24.
Date:1/10/2025.
Description:Simple code for Exam Eligibility.
*/

#include <stdio.h> //Pre-Processor Derivative printf(),Scanf().

int main () {
	float Attendance;
	float Average_marks;
	
	//Prompt user to enter averages of attendance and average marks.
	printf("\t EXAM ELIGIBILITY CHECKER.\n");
	
	//input accumulated attendance percentage.
	//with a simple error handling code
	printf("Enter your attendance percentage(0-100):\t");
	if (scanf("%f",&Attendance) !=1 || Attendance <0 || Attendance >100){
		printf("Invalid Attendnce Percentage.\n");
		return 1; //Exist the program.
	}
	
	//input accumulated average marks.
	//with a simple error handling code
	printf("Enter your average marks(0-100):\t");
	if (scanf("%f",&Average_marks) !=1 || Attendance <0 || Attendance>100){
		printf("Invalid Attendance Percentage.\n");
		return 1; //Exits the prograam.
	}
	
	//Cheking for eligibility.
	if(Attendance >=75 && Average_marks >=40) {
		printf("Eligible for final examination.\n");
		}else {
			printf("Not Eligible for Examination.\n");
			if (Attendance <75) {
				printf("Reason low attendance percentage(%.2f)", Attendance);
				}
				if (Average_marks <40){
					printf("Reason low marks(%.2f)", Average_marks);
				} 
				
			}
	
	return 0;
}