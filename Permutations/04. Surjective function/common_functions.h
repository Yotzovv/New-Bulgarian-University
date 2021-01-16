#pragma once
#include <string>
#ifndef COMMON_FUNCTIONS_H
#define COMMON_FUNCTIONS_H

using namespace std;

void print(int* arr, int rows);

int* InputArray();

int ProcessElement(int element);

int* ProcessArray(int* arr, string function);

bool checkIfSurjective(int* domain, int* codomain);

#endif