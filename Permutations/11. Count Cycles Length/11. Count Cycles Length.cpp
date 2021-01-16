//Задача 10. Да се дефинира функция на С++, която представя дадена пермутация във
//вид на независими цикли и ги отпечатва на екрана.
#include <iostream>
#include "common_functions.h"

using namespace std;

int main()
{
	int arrSize;
	cin >> arrSize;
	int* s = inputArray(arrSize);

	int* permutationA = inputArray(arrSize);

	list<list<int>> l = getCycles(permutationA, s, arrSize);

	print(l);
}