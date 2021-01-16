#include <iostream>
#include "common_functions.h"

using namespace std;

/// <summary>
/// Loops trough an array and prints every item
/// </summary>
/// <param name="arr"></param>
/// <param name="rows"></param>
void print(int* arr, int rows)
{
	for (int i = 0; i < rows; i++)
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
	int sizeOfArr = sizeof(arr);

	int* newArr = new int[sizeOfArr];

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
				return false;
			}
		}
	}

	return true;
}

/// <summary>
/// Checks if item from B is contained in Processed A
/// </summary>
/// <param name="domain"></param>
/// <param name="codomain"></param>
/// <returns></returns>
bool checkIfSurjective(int* domain, int* codomain)
{
	for (int b = 0; b < sizeof(codomain); b++)
	{
		for (int a = 0; a < sizeof(domain); a++)
		{
			if (codomain[b] == domain[a])
			{
				return true;
			}
		}
	}

	return false;
}