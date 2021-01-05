#include <array>
#include <iostream>
#include "matrix.h"

using namespace std;

void print2DArray(int* arr, int rows, int n)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << *(arr + i * n + j) << " ";
		}

		cout << endl;
	}
}

int* define2DArray(int rows, int n)
{
	int* arr = new int[rows * n];

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < n; j++)
		{
			*(arr + i * n + j) = rand() % 100;
		}
	}

	return arr;
}