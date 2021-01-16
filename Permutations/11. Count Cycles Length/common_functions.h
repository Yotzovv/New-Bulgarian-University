#include <iostream>
#include <list>

using namespace std;

#pragma once
#ifndef COMMON_FUNCTIONS_H
#define COMMON_FUNCTIONS_H

int* inputArray(int sizeofarray);

int findSmallestElement(int arr[], int n);

bool arrayIsEmpty(int* arr, int arrSize);

int* removeZerosFromArray(int* arr, int arrSize);

bool arrayContainsElement(int* arr, int arrSize, int element);

list<list<int>> getCycles(int* arr, int* s, int arrSize);

void print(list<list<int>> list);

#endif