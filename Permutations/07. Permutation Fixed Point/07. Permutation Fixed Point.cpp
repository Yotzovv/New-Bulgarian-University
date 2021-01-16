//Задача 7. Да се дефинира функция на С++, която проверява дали записана в масив
//пермутация има неподвижна точка.

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

	CheckForFixedPoint(arr, sizeOfArray);
}
