#include <array>
#include <iostream>
#include "matrix_functions.h"

using namespace std;

/// <summary>
/// Nested iteration that prints every item
/// </summary>
/// <param name="arr"></param>
/// <param name="rows"></param>
/// <param name="n"></param>
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

/// <summary>
/// Creates a matrix with given rows and cols
/// </summary>
/// <param name="rows"></param>
/// <param name="n"></param>
/// <returns></returns>
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