// 04.Output description of tokens,litarals and command.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    std::string tokens = "A token is the smallest element of a program that is meaningful to the compiler. \nTokens can be classified as follows:\nKeywords\nIdentifiers\nConstants\nStrings\nSpecial Symbols\nOperators\n";
    std::string literals = R"(02.Literals
Constants refer to fixed values that the program may not alter and they are called literals.
Constants can be of any of the basic data typesand can be divided into Integer Numerals, Floating -   Point Numerals, Characters, Strings and Boolean Values.
Again, constants are treated just like regular variables except that their values cannot be modified after their definition.)";
    std::string operators = R"(03.Operators
Operators are used to perform operations on variables and values.
Example of operators:
+
-
*
/
%
++
--)";

    std::cout << "01.Tokens:\n" + tokens + "\n\n";
    std::cout << literals + "\n\n";
    std::cout << operators + "\n\n";
}