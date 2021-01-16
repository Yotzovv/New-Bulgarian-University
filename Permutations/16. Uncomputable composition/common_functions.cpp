#include <iostream>
#include "common_functions.h"

using namespace std;

/// <summary>
/// Checks if output of a function is the same its the parameter
/// Then checks if count of fixed points is less than the size of array
/// </summary>
/// <param name="arr"></param>
/// <param name="sizeOfArray"></param>
/// <returns></returns>
bool isPermutationNotIdentity(int* arr, int sizeOfArray)
{
	int fixedPtsCount = 0;
	for (int i = 0; i < sizeOfArray; i++)
	{
		int x = arr[i];
		int f = pow(x, 2) - 3 * x + 4; //x^2 - 3x + 4

		if (x == f)
		{
			fixedPtsCount++;
		}
	}

	return fixedPtsCount != sizeOfArray;
}

/// <summary>
/// Creates an array from user input
/// Ex: 1 2 3 4 5
/// </summary>
/// <param name="sizeofarray"></param>
/// <returns></returns>
int* InputArray(int sizeofarray)
{
	int* arr = new int[sizeofarray];

	cout << "Elements: ";
	for (int i = 0; i < sizeofarray; ++i)
	{
		cin >> arr[i];
	}

	cout << endl;

	return arr;
}
