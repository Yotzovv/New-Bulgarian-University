//������ 1.�� �� �������� �������� ��������� �����, ����� ��� ���������� 2 ���� � n ������,
//� ������� �� ����� �� ����������� ������� ����� ��������� � n ��������

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
