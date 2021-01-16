//Задача 8. Да се дефинира функция на С++, която намира броя на неподвижните
//точки на една пермутация.

#include <iostream>
#include "common_functions.h"

using namespace std;

int main()
{
	cout << "Array length: ";
	int sizeOfArray;
	cin >> sizeOfArray;

	int* arr;
	arr = InputArray(sizeOfArray);

	PrintFixedPoints(arr, sizeOfArray);
}