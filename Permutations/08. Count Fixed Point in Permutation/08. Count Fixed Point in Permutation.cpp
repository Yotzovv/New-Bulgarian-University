//������ 8. �� �� �������� ������� �� �++, ����� ������ ���� �� ������������
//����� �� ���� ����������.

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

	PrintFixedPoints(arr, sizeOfArray);
}