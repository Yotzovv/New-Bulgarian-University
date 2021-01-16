#pragma once
#include <string>
#include <iostream>
#ifndef COMMON_FUNCTIONS_H
#define COMMON_FUNCTIONS_H

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
/// Checks if any item has the same value after processing.
/// </summary>
/// <param name="arr"></param>
/// <param name="sizeOfArray"></param>
void CheckForFixedPoint(int* arr, int sizeOfArray)
{
	for (int i = 0; i < sizeOfArray; i++)
	{
		int x = arr[i];
		int f = pow(x, 2) - 3 * x + 4; //x^2 - 3x + 4

		if (x == f)
		{
			cout << "Function has a fixed point!" << endl;

			return;
		}
	}
}

#endif