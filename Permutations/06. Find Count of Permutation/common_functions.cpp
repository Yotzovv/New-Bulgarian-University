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
/// Multiplies numbers in range 0 to Array Length
/// </summary>
/// <param name="arrLength"></param>
/// <returns></returns>
int CalculateFactoriel(int arrLength)
{
	int factoriel = 1;

	for (int i = 1; i <= arrLength; i++)
	{
		factoriel *= i;
	}

	return factoriel;
}

#endif