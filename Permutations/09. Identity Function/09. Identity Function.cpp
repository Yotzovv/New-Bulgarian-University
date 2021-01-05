//Задача 9. Да се дефинира функция на С++, която проверява дали записана в масив
//пермутация е идентитет.


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

void PrintFixedPoints(int* arr, int sizeOfArray)
{
	int fixedPtsCount = 0;
	for (int i = 0; i < sizeOfArray; i++)
	{
		int x = arr[i];
		int f = pow(x, 2) - 3 * x + 4; //x^2 - 3x + 4

		if (x == f)
		{
			fixedPtsCount++;
		}
	}

	string isIdentityFunction = fixedPtsCount == sizeOfArray ? "True" : "False";

	cout << "Is Identity Function: " << isIdentityFunction << endl;
}

int main()
{
	cout << "Array length: ";
	int sizeOfArray;
	cin >> sizeOfArray;

	int* arr;
	arr = InputArray(sizeOfArray);

	PrintFixedPoints(arr, sizeOfArray);
}