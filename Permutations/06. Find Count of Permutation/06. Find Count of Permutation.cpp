//Нека n ∈ N.Ако с Pn означим броя на пермутациите на n - елемента, то Pn = n!= 1.2.3 . . ..n.
//Задача 6. Да се дефинира функция на С++, която намира броя на пермутациите на
//зададеното от потребителя множество.

#include <iostream>

using namespace std;

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

int CalculateFactoriel(int arrLength)
{
	int factoriel = 1;

	for (int i = 1; i <= arrLength; i++)
	{
		factoriel *= i;
	}

	return factoriel;
}

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