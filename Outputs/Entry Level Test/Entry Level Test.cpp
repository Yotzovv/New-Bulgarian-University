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

//Курсово събитие
//
//Да се състави С++ програма, реализираща "играта" отгатни числото.
//
//Пъври вариант на играта :
//
//Компютърът си намисля псевдо - случайно число цяло число, което потребителя трябва да отгатне.При успешен опит,
//да се изписва на екрана, че числото е отгатната и потребителя печели, 
//а при неуспешен да се дава възможност да опита да познае числото отново.
//
//Подобрена версия :
//
//Да се съобщава на потребителя от кой опит е познал числото;
//Да се съобщава на потребителя, дали намисленото число е по - голямо или по - малко от предложеното;
//Потребителят да задава начален интервал, в който компютъра да си намисля число, например
//задава[5, 25], компютърът намисля число в този интервал;
//Програмата да се промени, така че да работи и с числа с плаваща запетя, 
//като се следи за точност до втория знак.Например, компщтърат е "измислил" число 2.3456, 
//а потребителят предложи число 2.34, то да се счита за успешен опит.
