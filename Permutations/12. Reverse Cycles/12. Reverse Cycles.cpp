//������ 12. �� �� �������� ������� �� �++, ����� �������� ���� �������� ����������,
//����������� ���� ������������ �� ���������� ����� � � ��������� � �������� ��� �
//���������
#include <iostream>
#include <vector>
#include <string>
#include "common_functions.h"

using namespace std;

//Ex: (3 4 1 5)(2 3 6 1)(3 1)  -->  (1 6 5 3 2 4)
int main()
{
	cout << "Permutation cycles: ";
	string userInput;
	getline(cin, userInput);

	vector<int> result = processCycles(userInput);
	
	print(result);
}