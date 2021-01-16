//Задача 1.Да се дефинира двумерен динамичен масив, който има размерност 2 реда и n стълба,
//с помощта на който ще представяме функция върху множество с n елемента

#include "matrix_functions.h"
#include <iostream>

using namespace std;

int main()
{
	int rows = 2;
	int n;

	cout << "Columns: ";
	cin >> n;
	cout << endl;

	int* arr = define2DArray(rows, n);
	
	print2DArray(arr, rows, n);
}
