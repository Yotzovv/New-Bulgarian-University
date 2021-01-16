//Задача 9. Да се дефинира функция на С++, която проверява дали записана в масив
//пермутация е идентитет.

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

	is_function_identity(arr, sizeOfArray);
}