//Задача 2.Да се дефинира функция на С++ зазапълване на двумерен масив по зададено от потребителя множество от стойности на функция.
#include <iostream>
#include "common_functions.h"

using namespace std;

int main()
{
	int rows, cols;

	cout << "Rows: ";
	cin >> rows;

	cout << "Cols: ";
	cin >> cols;

	int* arr = define2DArray(rows, cols);

	print2DArray(arr, rows, cols);

}