//Задача 4. Да се дефинира функция на С++, която проверява дали записана в масив
//функция е сюрекция.

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <string.h>

using namespace std;

void print(int* arr, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
	cout << endl;
}

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

bool checkIfSurjective(int* domain, int* codomain)
{
	for (int b = 0; b < sizeof(codomain); b++)
	{
		for (int a = 0; a < sizeof(domain); a++)
		{
			if (codomain[b] == domain[a])
			{
				cout << "Function is surjective!" << endl;
				return true;
			}
		}
	}

	cout << "Function is not surjective!" << endl;
	return false;
}

//Enter function in format: f = x^2 + 3
//Note the spaces
int main()
{
	cout << "Enter function: ";
	string function;

	getline(cin, function);

	cout << "Size of array A: ";
	int* domain = InputArray();

	cout << "Size of array B: ";
	int* codomain = InputArray();

	int* newDomain = ProcessArray(domain, function);
	cout << endl << "Processed A: ";
	print(newDomain, sizeof(newDomain));

	checkIfSurjective(newDomain, codomain);
}