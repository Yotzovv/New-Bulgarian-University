//Задача 14. Да се дефинира функция на С++, която намира обратната пермутация на
//дадена пермутация.

#include <string>
#include "common_functions.h"

using namespace std;

//Ex:  (1 2 3)(4 5) ->  (3 2 1)(5 4)
//Ex: (1 5 4 6)(2 3) -> (6 4 5 1)(3 2)
int main()
{
	cout << "Permutation: ";
	string permutation;
	getline(cin, permutation);

	auto result = reverse_permutation(permutation);

	print(result);
}