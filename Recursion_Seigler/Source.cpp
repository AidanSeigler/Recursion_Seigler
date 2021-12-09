// Recursion Practice
// Aidan Seigler
// Assigned by Dr. Tyson McMillian
// 12 - 08 - 2021
#include <iostream>
#include "Input_Validation_Extended.h"
using namespace std;

int factorialR(int);
void hanoi(int, int, int);
void pm(int, int);

int main()
{
	int diskCount = 0;
	int startRod = 0;
	int endRod = 0;

	int number = 0;
	int factorial = 0;

	cout << "=====================================\n";
	cout << "\tTower's of Hanoi\n";
	cout << "Enter disk count: ";
	diskCount = validateInt(diskCount);
	cout << "Enter start rod: ";
	startRod = validateInt(startRod);
	cout << "Enter end rod: ";
	endRod = validateInt(endRod);

	cout << endl;
	cout << "Disk Count = " << diskCount << endl;
	cout << "Start Rod = " << startRod << endl;
	cout << "End Rod = " << endRod << endl << endl;
	cout << "Optimized Solution:" << endl;
	hanoi(diskCount, startRod, endRod);

	cout << "=====================================\n";
	cout << "\tFactorial Calculator\n";
	cout << "Enter an integer: ";
	number = validateInt(number);



	factorial = factorialR(number);
	cout << "The factorial of " << number << " is " << factorial << endl;


	return 0;
}

void pm(int start, int end)
{
	cout << start << " -> " << end << endl;
}

void hanoi(int n, int start, int end)
{
	int other = 0;

	if (n == 1)
	{
		pm(start, end);
	}
	else
	{
		other = 6 - (start + end);
		hanoi(n - 1, start, other);
		pm(start, end);
		hanoi(n - 1, other, end);
	}
}

int factorialR(int r)
{
	if (r > 1)
		return r * factorialR(r - 1);
	else
		return 1;
}

/*
	Recursion is a way of using a function or algorithm that calls itself 
	over and over again until a special condition is met.
*/
