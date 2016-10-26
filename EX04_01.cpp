/////////////////////////////
// Jalen Robinson-McClure
// October 25th, 2016
// EX 04_01
// CS 172
////////////////////////////

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// variables
	double sum;
	double ave;
	/// given array
	double list[] = { 1,2,3,4,5,6};
	// displays values in the array
	for (int i = 0; i < 6; i++)
	{
		cout << "the value is: " << *(list + i) << endl;
	}
	// calculates the average of the array
	for (int i = 0; i < 6; i++)
	{
		sum += list[i];
	}

	ave = sum / 6;
	// displays the average
	cout << "The average of the array is " << ave << endl;

	// compares value of point in array to the average
	for (int i = 0; i < 6; i++)
	{
		if (list[i] > ave)
		{
			cout << "This value in the array is greater then the average" << endl;
		}
		else
		{
			cout << "This value in the array is less then the average" << endl;
		}
	}

}