//������ 9. �� �� �������� ������� �� �++, ����� ��������� ���� �������� � �����
//���������� � ���������.

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

	is_function_identity(arr, sizeOfArray);
}