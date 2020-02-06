//Write the include statement for decisions.h here
#include"decision.h"
//Write include for capturing input from keyboard and displaying output to screen
#include<iostream>
using std::cout;
using std::cin;
//Write namespace using statements for cout and cin

int main() 
{
	
	double hours;
	double hourly_rate;
	double gross_salery;
	//create a double variable named hours
	//create a double variable named hourly_rate
	cout << "How many hours did you work this week?";
	cin >> hours;
	cout << "What is the hourly rate?";
	cin >> hourly_rate;
	//Prompt user for keyboard input for hours and hourly_rate
	//save the input to variables hours and hourly_rate

	//Create a double variable named gross_salary
	//Call the gross_pay function and save its return value to the gross_salary variable
	gross_salery = gross_pay(hours, hourly_rate);
	//Display the gross_salary variable as follows:
	//Example ---->>>     Gross pay: 150.00   
	cout << "Your gross pay is: " << gross_salery;
	return 0;
}

