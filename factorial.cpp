// Copyright (c) 2021 Felipe Affonso All rights reserved
//
// Created by: Felipe Affonso
// Created on: May 2021
// This program calculates the factorial

#include <iostream>
#include <cmath>
#include <iomanip>
#include <random>

int main() {
    int input;
    int loop = 0;
    int result = 1;
    std::cout << "This program calculates the factorial." << std::endl;

    try {
        std::cout << "\nInsert an integer:";

        std::cin >> input;

        if (input >= 0) {
            while (loop < input) {
                loop = loop + 1;
                result = result * loop;
            }
            std::cout << "\n" << input << "! = " << result << std::endl;
        } else {
            std::cout <<
            "\nThis input is invalid, please, insert a positive integer."
            << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "\nThis input is invalid, please, insert an integer."
        << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
