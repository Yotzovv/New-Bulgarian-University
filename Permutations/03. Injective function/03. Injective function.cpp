//Задача 3. Да се дефинира функция на С++, която проверява дали записана в масив
//функция е инекция.


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

	cout << "Size of array: ";
	int* domain = InputArray();

	int* newDomain = ProcessArray(domain, function);
	print(newDomain, sizeof(newDomain));

	checkIfInejctive(newDomain);
}