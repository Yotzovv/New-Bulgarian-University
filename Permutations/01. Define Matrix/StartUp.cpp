//������ 1.�� �� �������� �������� ��������� �����, ����� ��� ���������� 2 ���� � n ������,
//� ������� �� ����� �� ����������� ������� ����� ��������� � n ��������

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
