// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Seti Ngabo
// Created on: Sept 2021
// This program guess random numbers

#include <iostream>

int main() {
    // this function checks for the random number
    const int the_number = 5;
    int random_number;

    // input
    std::cout << "Enter the number between 0 and 9: ";
    std::cin >> random_number;
    std::cout << "" << std::endl;

    // process
    if (random_number == 5) {
        // output
        std::cout << "Correct";
        std::cout << "" << std::endl;
        std::cout << "Done.";
    }
    // process
    if (random_number != 5) {
        // output
        std::cout << "Wrong, try again.";
        std::cout << "" << std::endl;
        std::cout << "Done.";
    }
}