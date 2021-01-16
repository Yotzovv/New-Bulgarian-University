#include <iostream>
#include <map>
#include <iterator>
#include <list>
#include <algorithm>
#include <vector>
#include "common_functions.h"

using namespace std;

/// <summary>
/// Takes user input of type int
/// </summary>
/// <param name="sizeofarray"></param>
/// <returns></returns>
int* inputArray(int sizeofarray)
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
/// Returns the min value of element inside the array
/// </summary>
/// <param name="arr"></param>
/// <param name="n"></param>
/// <returns></returns>
int findSmallestElement(int arr[], int n) {
	int temp = arr[0];
	int index;
	for (int i = 0; i < n; i++) {
		if (temp > arr[i]) {
			temp = arr[i];
			index = i;
		}
	}
	return temp;
}

/// <summary>
/// Checks if array has no items
/// </summary>
/// <param name="arr"></param>
/// <param name="arrSize"></param>
/// <returns></returns>
bool arrayIsEmpty(int* arr, int arrSize)
{
	int zerosCount = 0;

	for (int i = 0; i < arrSize; i++)
	{
		if (arr[i] == 0)
		{
			zerosCount++;
		}
	}

	return zerosCount == arrSize;
}

static int arrSizeStatic = 0;

/// <summary>
/// Removes 0's from array
/// </summary>
/// <param name="arr"></param>
/// <param name="arrSize"></param>
/// <returns></returns>
int* removeZerosFromArray(int* arr, int arrSize)
{
	list<int> newArray;

	for (int i = 0; i < arrSize; i++)
	{
		if (arr[i] != 0)
		{
			newArray.push_back(arr[i]);
		}
	}

	//convert list to array
	arrSizeStatic = newArray.size();
	int* result = new int[newArray.size()];
	std::copy(newArray.begin(), newArray.end(), result);

	return result;
}

/// <summary>
/// Iterates an array and checks if any item equals the element parameter
/// </summary>
/// <param name="arr"></param>
/// <param name="arrSize"></param>
/// <param name="element"></param>
/// <returns></returns>
bool arrayContainsElement(int* arr, int arrSize, int element)
{
	for (int i = 0; i < arrSize; i++)
	{
		if (arr[i] == element)
		{
			return true;
		}
	}

	return false;
}

/// <summary>
/// Iterates array and gets permutation cycles
/// </summary>
/// <param name="arr"></param>
/// <param name="s"></param>
/// <param name="arrSize"></param>
/// <returns></returns>
list<list<int>> getCycles(int* arr, int* s, int arrSize)
{
	list<list<int>> result;

	//from S start with first index
	//from arr2 take whats on the same index as previous step
	//from S go to the same element of step 2 
	// repeate step 2 and 3 untill value equals first number
	bool hasNumbers = true;
	while (hasNumbers)
	{
		if (arrayIsEmpty(s, arrSize))
		{
			hasNumbers = false;
			break;
		}

		list<int> currList;
		int currentS = 0;
		vector<int> takenIdx;
		for (int i = 0; i < arrSize; i++)
		{
			int sI = s[i];
			int arrI = arr[i];

			if (currentS == 0)
			{
				currentS = sI;
			}

			if (sI != currentS && i == arrSize - 1)
			{
				i = -1;
				continue;
			}

			if (sI != currentS)
			{
				continue;
			}

			if (sI == arrI || arrI == s[0])
			{
				takenIdx.push_back(i);
				break;
			}


			currList.push_back(sI);
			currList.push_back(arrI);

			currentS = arrI;

			takenIdx.push_back(i);
		}

		currList.unique();

		for (int i = 0; i < takenIdx.size(); i++)
		{
			int idx = takenIdx[i];

			s[idx] = NULL;
			arr[idx] = NULL;
		}

		s = removeZerosFromArray(s, arrSize);
		arr = removeZerosFromArray(arr, arrSize);
		arrSize = arrSizeStatic;

		result.push_back(currList);
	}

	return result;
}

/// <summary>
/// Prints 2D vector of ints
/// </summary>
/// <param name="list"></param>
void print(list<list<int>> list)
{
	cout << endl << "Result: ";
	for (auto a : list)
	{
		cout << "(";
		for (auto b : a)
		{
			cout << b << " ";
		}
		cout << ")";
	}
	cout << endl;
}