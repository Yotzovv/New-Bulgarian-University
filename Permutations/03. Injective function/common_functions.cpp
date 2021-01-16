#include <iostream>
#include <string>
#include "common_functions.h"

using namespace std;

/// <summary>
/// Loops trough an array and prints every item
/// </summary>
/// <param name="arr"></param>
/// <param name="rows"></param>
void print(int* arr, int rows)
{
	for (int i = 0; i < rows + 1; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
	cout << endl;
}

/// <summary>
/// Takes users input and stores it in array of ints
/// </summary>
/// <returns></returns>
int* InputArray()
{
	int sizeofarray;
	cin >> sizeofarray;

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
/// Executes math function with the parameter as its X
/// </summary>
/// <param name="element"></param>
/// <returns></returns>
int ProcessElement(int element)
{
	string f = "f = x^2 + 3";

	int x = f.find('x');

	int powBaseIdx = f.find('^') + 1;
	int powBase = stoi(f.substr(powBaseIdx, 1));
	//find index of +, -, *, /
	int op = f.find('+') == -1 ? f.find('-') : f.find('+');
	op = (op == -1) ? (f.find('*') == -1 ? f.find('/') : f.find('*')) : op;

	int res{};
	if (powBase > 0)
	{
		res = pow(element, powBase);
	}

	string oper = f.substr(op, 1);

	int n = stoi(f.substr(op + 2, 1));

	int result = 0;

	if (oper == "+")
	{
		result = res + n;
	}
	else if (oper == "-")
	{
		result = res - n;
	}
	else if (oper == "*")
	{
		result = res * n;
	}
	else if (oper == "/")
	{
		result = res / n;
	}

	return result;
}

/// <summary>
/// Iterates array and executes math function for every item.
/// </summary>
/// <param name="arr"></param>
/// <param name="function"></param>
/// <returns></returns>
int* ProcessArray(int* arr, string function)
{
	int sizeOfArr = sizeof(arr) + 1;

	int* newArr = new int[sizeOfArr];

	for (int i = 0; i < sizeOfArr; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < sizeOfArr; i++)
	{
		int result = ProcessElement(arr[i]);
		newArr[i] = result;
	}

	return newArr;
}

/// <summary>
/// Checks if array has duplicated items.
/// </summary>
/// <param name="arr"></param>
/// <returns></returns>
bool checkIfInejctive(int* arr)
{
	int rows = sizeof(arr);

	for (int i = 0; i < rows; i++)
	{
		for (int a = i + 1; a < rows; a++)
		{
			if (arr[i] == arr[a])
			{
				cout << "Function is not inejction" << endl;
				return false;
			}
		}
	}

	cout << "Function is inejction" << endl;
	return true;
}