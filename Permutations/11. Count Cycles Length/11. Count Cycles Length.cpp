//������ 10. �� �� �������� ������� �� �++, ����� ��������� ������ ���������� ���
//��� �� ���������� ����� � �� ��������� �� ������.
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