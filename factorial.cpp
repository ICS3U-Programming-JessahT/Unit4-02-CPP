// Copyright (c) Jessah All rights reserved.
//
// Name Jessah
// 15/11/2022
// This program ask the user for a positive integer
// it will track the loop
// And it will produce a factorial of said number

#include <iostream>

int main() {
// delcare variables
    int counter = 0;
    int factorial = 1;
    std::string userString;
    int userInt;
    float userFloat;
// get input from the user
    std::cout << "Enter a positive number: ";
    std::cin >> userString;
    std::cout << "" << std::endl;

    try {  // catch any floats or string
        userInt = std::stoi(userString);
        userFloat = std::stof(userString);

        if (userFloat != userInt) {  // when input is decimal
            std::cout << userFloat
            << " is invalid, put a positive number"
            << std::endl;
        } else if (userInt >= 0) {
            do {
                counter = counter + 1;
                factorial = factorial * counter;
                std::cout << "Tracking " << counter
                << " times through the loop \n";
            } while (counter < userInt);  // when the loop is done
            // display factorial
            std::cout << "\n The product of " << userInt
            << "! is " << factorial;

        } else {  // when input is negative
            std::cout << userInt << " Is invalid, put a positive number";
        }
       } catch (std::invalid_argument) {  // when input is string
        std::cout << userString << " Is invalid, put a positive number";
    }
    }
