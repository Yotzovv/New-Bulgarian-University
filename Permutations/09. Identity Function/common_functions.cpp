#include <string>
#include <iostream>
#include "common_functions.h"

using namespace std;

/// <summary>
/// Takes user input of type int
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

/// <summary>
/// Checks if all elements are fixed points.
/// </summary>
/// <param name="arr"></param>
/// <param name="sizeOfArray"></param>
void is_function_identity(int* arr, int sizeOfArray)
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

	bool isIdentityFunction = fixedPtsCount == sizeOfArray;

	if (isIdentityFunction)
	{
		cout << "Function is identity." << endl;
	}
	else
	{
		cout << "Function is not identity." << endl;
	}
}