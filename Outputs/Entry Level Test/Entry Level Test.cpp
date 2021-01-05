// Entry Level Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

double fRand(double min, double max)
{
    return (max - min) * ((double)rand() / (double)RAND_MAX) + min;
}

double round(double var)
{
    double value = (int)(var * 100 + .5);
    return (double)value / 100;
}

int main()
{
    double range[2] = { };
    std::cout << "Type a minimum number: "; // Type a number and press enter
    std::cin >> range[0]; // Get user input for the min range

    std::cout << "Type a maximum number: "; // Type a number and press enter
    std::cin >> range[1]; // Get user input for the max range

    double randomNumber = round(fRand(range[0], range[1]));

    std::cout << "Guess the number!" << "\n\n";

    int inputCount = 1;
    double userInput;
    std::cin >> userInput;

    while (userInput != randomNumber)
    {
        if (userInput == randomNumber)
        {
            break;
        }

        if (userInput > randomNumber)
        {
            std::cout << "The number is lower.\n";
        }
        else if (userInput < randomNumber)
        {
            std::cout << "The number is higher.\n";
        }

        inputCount++;
        std::cin >> userInput;
    }

    std::cout << "\n" << "Correct answer!" << "\n";
    std::cout << "You guessed from the " << inputCount << " try.\n\n";
}

//������� �������
//
//�� �� ������� �++ ��������, ����������� "������" ������� �������.
//
//����� ������� �� ������ :
//
//���������� �� ������� ������ - �������� ����� ���� �����, ����� ����������� ������ �� �������.��� ������� ����,
//�� �� ������� �� ������, �� ������� � ��������� � ����������� ������, 
//� ��� ��������� �� �� ���� ���������� �� ����� �� ������ ������� ������.
//
//��������� ������ :
//
//�� �� �������� �� ����������� �� ��� ���� � ������ �������;
//�� �� �������� �� �����������, ���� ����������� ����� � �� - ������ ��� �� - ����� �� ������������;
//������������ �� ������ ������� ��������, � ����� ��������� �� �� ������� �����, ��������
//������[5, 25], ���������� ������� ����� � ���� ��������;
//���������� �� �� �������, ���� �� �� ������ � � ����� � ������� ������, 
//���� �� ����� �� ������� �� ������ ����.��������, ���������� � "��������" ����� 2.3456, 
//� ������������ �������� ����� 2.34, �� �� �� ����� �� ������� ����.
