//Задача 7. Да се дефинира функция на С++, която проверява дали записана в масив
//пермутация има неподвижна точка.

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

void CheckForFixedPoint(int* arr, int sizeOfArray)
{
	for (int i = 0; i < sizeOfArray; i++)
	{
		int x = arr[i];
		int f = pow(x, 2) - 3 * x + 4; //x^2 - 3x + 4

		if (x == f)
		{
			cout << "Function has a fixed point!" << endl;

			return;
		}
	}
}

int main()
{
	cout << "Array length: ";
	int sizeOfArray;
	cin >> sizeOfArray;

	int* arr;
	arr = InputArray(sizeOfArray);

	CheckForFixedPoint(arr, sizeOfArray);
}
