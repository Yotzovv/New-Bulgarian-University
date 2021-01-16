//Нека n ∈ N.Ако с Pn означим броя на пермутациите на n - елемента, то Pn = n!= 1.2.3 . . ..n.
//Задача 6. Да се дефинира функция на С++, която намира броя на пермутациите на
//зададеното от потребителя множество.

#include <iostream>
#include "common_functions.h"

using namespace std;

int main()
{
	int* arr;
	int sizeofarray;
	cout << "Array length: ";
	cin >> sizeofarray;
	arr = InputArray(sizeofarray);

	int factoriel = CalculateFactoriel(sizeofarray);
	
	cout << "Number of permutations: " << factoriel << endl;
}