//������ 10. �� �� �������� ������� �� �++, ����� ��������� ������ ���������� ���
//��� �� ���������� ����� � �� ��������� �� ������.

#include "common_functions.h"

//Ex: 2 3 1 5 4 6 -> (1 5 4 6)(2 3)
int main()
{
	cout << "Array size: ";
	int arrSize;
	cin >> arrSize;
	int* s = inputArray(arrSize);
	
	int* permutationA = inputArray(arrSize);

	list<list<int>> l = getCycles(permutationA, s, arrSize);

	print(l);
}