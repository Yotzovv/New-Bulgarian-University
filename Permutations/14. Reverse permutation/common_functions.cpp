#include <iostream>
#include <vector>
#include <string>
#include "common_functions.h"

using namespace std;

/// <summary>
///Takes input as string and inserts the elements into a 2D Vector 
/// </summary>
/// <param name="cycles"></param>
/// <returns>2D vector of ints</returns>
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

/// <summary>
/// Reverses the order of the elements in each cycle
/// </summary>
/// <param name="permutation"></param>
/// <returns>2D vector of ints</returns>
vector<vector<int>> reverse_permutation(string permutation)
{
	vector<vector<int>> matrix = storeInputInMatrix(permutation);
	vector<vector<int>> result;

	int curr_mtrx_idx = 0;
	int curr_item_idx = 0;

	while (curr_mtrx_idx < matrix.size())
	{
		vector<int> nums;

		curr_item_idx = matrix[curr_mtrx_idx].size() - 1;

		while (curr_item_idx >= 0)
		{
			auto item = matrix[curr_mtrx_idx][curr_item_idx];

			nums.push_back(item);

			curr_item_idx--;
		}

		result.push_back(nums);
		curr_mtrx_idx++;
	}

	return result;
}

/// <summary>
///	Prints a 2D vector in format (x x x)(x x)
/// </summary>
/// <param name="list"></param>
void print(vector<vector<int>> list)
{
	cout << endl << "Reversed Permutation: ";
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
