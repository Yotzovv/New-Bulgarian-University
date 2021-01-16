//Задача 4. Да се дефинира функция на С++, която проверява дали записана в масив
//функция е сюрекция.

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <string.h>
#include "common_functions.h"

using namespace std;


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