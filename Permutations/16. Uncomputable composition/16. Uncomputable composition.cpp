////Задача 16. Да се дефинира функция на С++, която проверява, че ако две пермутации са
//различни от идентитет, т.е.f 6 = id и g 6 = id, то операцията композиция е некомутативна,
//т.е.f ◦ g 6 = g ◦ f.
#include <iostream>
#include<string>
#include "common_functions.h"

using namespace std;

//Ex: (1 5 4 6)(2 3) ◦ (1 2 3)(4 5)
int main()
{
	cout << "Numbers count: ";
	int arrSizeA;
	cin >> arrSizeA;

	int* permutation_a = InputArray(arrSizeA);

	cout << "Numbers count: ";
	int arrSizeB;
	cin >> arrSizeB;
	int* permutation_b = InputArray(arrSizeB);

	bool is_composition_uncomputable = isPermutationNotIdentity(permutation_a, arrSizeA) && isPermutationNotIdentity(permutation_b, arrSizeB);

	cout << (is_composition_uncomputable == true ? "Composition is commutative" : "Composition is noncommutative") << endl;
}
