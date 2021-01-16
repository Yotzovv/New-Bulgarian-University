//Една функция f : A → B наричаме биективна или биекция, ако тя е едновременно инекция и сюрекция.Казваме
//още, че f е взаимно еднозначно съответствие между A и B.Ако A е крайно множество, то | A | = | B | и f наричаме
//пермутация.
//Задача 5. Да се дефинира функция на С++, която проверява дали записана в масив
//функция е пермутация.

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

	bool isBijective = checkIfInejctive(newDomain) && checkIfSurjective(newDomain, codomain);

	if (isBijective)
	{
		cout << "Function is bijective.";
	}
	else
	{
		cout << "Function is not bijective.";
	}
}