//Задача 1.Да се дефинира двумерен динамичен масив, който има размерност 2 реда и n стълба,
//с помощта на който ще представяме функция върху множество с n елемента

#include "matrix.h"
#include <iostream>

using namespace std;

int main()
{
	int rows = 2;
	int n;

	cin >> n;

	int* arr = define2DArray(rows, n);
	
	print2DArray(arr, rows, n);
}
