//Задача 12. Да се дефинира функция на С++, която получава като аргумент пермутация, представена като произведение от независими цикли и я отпечатва в табличен вид в
//конзолата

#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> storeInputInMatrix(string cycles)
{
	vector<vector<int>> matrix;

	for (int i = 0; i < cycles.length(); i++)
	{
		if (cycles[i] == '(')
		{
			vector<int> elements;

			for (int c = i + 1; c < cycles.length(); c++)
			{
				if (cycles[c] == ')')
				{
					break;
				}

				if (cycles[c] == ' ')
				{
					continue;
				}

				elements.push_back(cycles[c] - 48);
			}

			matrix.push_back(elements);
		}
	}

	return matrix;
}

void print(list<list<int>> list)
{
	cout << endl << "Result: ";
	for (auto a : list)
	{
		cout << "(";
		for (auto b : a)
		{
			int element = b;

			cout << element << " ";
		}
		cout << ")";
	}
	cout << endl;
}

void print(vector<int> list)
{
	cout << endl << "Result: ";
	for (auto a : list)
	{
		cout << a << " ";
	}
	
	cout << endl;

	if (list.size() == 0)
	{
		cout << "Empty result." << endl;
	}
}

int doesnt_contains_element(vector<int> v, int el)
{
	for (auto x: v)
	{
		if (x == el)
		{
			return false;
		}
	}

	return true;
}

int count_elements(vector<vector<int>> matrix)
{
	int uniquesCount = 0;

	vector<int> uniques;

	for (auto x: matrix)
	{
		for (int i : x)
		{
			if (doesnt_contains_element(uniques, i))
			{
				uniques.push_back(i);
			}
		}
	}

	return uniques.size();
}

//Ex: (3 4 1 5)(2 3 6 1)(3 1)  -->  (1 6 5 3 2 4)
//1. Start with last number. (the 1 from the last cycle)
//2. From current cycle take the go to element. (3)
//3. Search for the element in other cycles. (Starting from right to left)
//4. If they don't contain it the element goes in the result.
//   Else take the go to element (in our case is 6)
//		  and store it in the result so it will become (1 6)
//5. Repeat step 3 and 4.	
vector<int> processCycles(string userInput)
{
	vector<vector<int>> cycles = storeInputInMatrix(userInput);

	int currentVectorIdx = cycles.size() - 1;
	int uniquesCount = count_elements(cycles);

	vector<int> result;

	int lastElement = 0;
	int current = 0;
	int searchedElement = 0;

	while (uniquesCount != result.size())
	{
		if (currentVectorIdx == -1)
		{
			currentVectorIdx = cycles.size() - 1;
		}

		vector<int> currentVector = cycles[currentVectorIdx];
		int currentElementIdx = currentVector.size() - 1;
		bool shouldIterate = true;


		while (shouldIterate)
		{
			if (currentElementIdx == -1)
			{
				break;
			}

			int currentElement = currentVector[currentElementIdx];

			if (result.size() == 0)
			{
				result.push_back(currentElement);
				searchedElement = currentVector[0];
				shouldIterate = false;
				break;
			}

			if (currentElement == searchedElement)
			{
				int takenElementIdx = (currentElementIdx + 1) > currentVector.size() - 1 ? 0 : (currentElementIdx + 1);
				int takenElement = currentVector[takenElementIdx];
				if (doesnt_contains_element(result, takenElement))
				{
					result.push_back(takenElement);
					int searchedElementIdx = (takenElementIdx + 1) > currentVector.size() - 1 ? 0 : (takenElementIdx + 1);
					searchedElement = currentVector[searchedElementIdx];

					if (searchedElementIdx == 0 && currentVectorIdx == 0)
					{
						result.push_back(searchedElement);
						currentElementIdx--;
						shouldIterate = false;
					}
				}
				else
				{
					searchedElement = takenElement;
				}

				break;
			}

			currentElementIdx--;
		}

		currentVectorIdx--;
	}
	 
	return result;
}

int main()
{
	cout << "Permutation cycles: ";
	string userInput;
	getline(cin, userInput);

	vector<int> result = processCycles(userInput);
	
	print(result);
}