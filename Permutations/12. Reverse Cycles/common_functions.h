#include <iostream>
#include <list>

using namespace std;

#pragma once
#ifndef COMMON_FUNCTIONS_H
#define COMMON_FUNCTIONS_H

vector<vector<int>> storeInputInMatrix(string cycles);

void print(list<list<int>> list);

void print(vector<int> list);

int doesnt_contains_element(vector<int> v, int el);

int count_elements(vector<vector<int>> matrix);

vector<int> processCycles(string userInput);

#endif