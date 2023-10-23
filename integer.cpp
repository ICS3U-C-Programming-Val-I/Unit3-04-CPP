// Copyright (c) 2023 Val I All rights reserved.
//
// Created by: Val
// Created on: Oct, 22 2023
// This program tells you if an integer is positive,
// negative or neutral.

#include <iostream>

int integer;

int main() {
    // input - get integer from user
    std::cout << "Enter any integer\n";
    std::cin >> integer;

    // process - check if int is positive, negative or neutral.
    if (integer > 0) {
        // output - displaying result
        std::cout << integer << "is positive.\n";
    } else if (integer < 0) {
        // output - displaying result
        std::cout << integer << "is negative.\n";
    } else {
        // output - displaying result
        std::cout << integer << "is neutral.\n";
    }
}
