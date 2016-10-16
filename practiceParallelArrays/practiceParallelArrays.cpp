// This program uses two parallel arrays: one for hours
// worked and one for pay rate

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	const int num_Employees = 5;		// Number of employees
	int hours[num_Employees];			// Holds hours worked
	double payRate[num_Employees];		// Holds pay rates

	// Input the hours worked and the hourly pay rate
	cout << "Enter the hours worked by " << num_Employees
		<< " emplyees and their\n"
		<< "hourly pay rates.\n";
	for (int index = 0; index < num_Employees; index++)
	{
		cout << "Hours worked ny emplyee #" << (index + 1) << ": ";
		cin >> hours[index];
		cout << "Hourly pay rate for employee #" << (index + 1) << ": ";
		cin >> payRate[index]
	}


    return 0;
}

