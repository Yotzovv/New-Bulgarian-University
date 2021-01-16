#include <iostream>

using namespace std;

/// <summary>
/// Takes user input of type int
/// </summary>
/// <param name="sizeofarray"></param>
/// <returns></returns>
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

/// <summary>
/// Prints count of fixed points in array.
/// </summary>
/// <param name="arr"></param>
/// <param name="sizeOfArray"></param>
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

	cout << "Fixed points count: " << fixedPtsCount << endl;
}