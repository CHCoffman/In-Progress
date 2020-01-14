// This program will allocate memory for a user defined amount
// and will sort, average and display the information.
#include <iomanip>
#include <iostream>
using namespace std;

// Function prototypes
void sortArray(double *, int);
double getAverage(double *, int);

int main()
{
	int numTests;

	cout << "Enter the number of tests:\n";
	cin >> numTests;

	// Dynamically allocate enough memory
	double *testScores = new double[numTests];

	// Get the scores
	for(int i = 0; i < numTests; i++)
	{
		cout << "Enter the score for test " << (i + 1) << endl;
		cin >> *(testScores + i);
	}

	sortArray(testScores, numTests);
	double average = getAverage(testScores, numTests);
}

double getAverage(double* arr, const int SIZE)
{
	double sum = 0.0;
	for(int i = 0; i < SIZE, i++)
	{
		sum += *(arr + i);
	}
	return sum / SIZE;
}

void sortArray(double *arr, const int SIZE)
{
	int smallest;
	double temp;

	for(int i; i < SIZE; i++)
	{
		smallest = i;
		for(int j = (i + 1); j < SIZE; j++)
		{
			if( *(arr + j) < *(arr + smallest)
				smallest = j;
		}
	temp = *(arr + smallest);
	*(arr + smallest) = *(arr + i);
	*(arr + i) = temp;
	}
}
