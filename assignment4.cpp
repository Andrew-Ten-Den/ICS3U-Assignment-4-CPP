// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Andrew Ten-Den
// Created on: April 2022
// This program lets the user see if they can vote


#include <iostream>
#include <string>


int main() {
    // this function lets the user see if they can vote
    std::string ageAsString;
    int ageAsInt;

    // input
    std::cout << "How old are you?: ";
    std::cin >> ageAsString;

    // process
    try {
        ageAsInt = std::stoi(ageAsString);
        if (ageAsInt >= 18) {
        std::cout << "\nYou are eligible to vote!";
        } else if (0 <= ageAsInt <= 17) {
            std::cout << "\nYou are not eligible to vote!";
        } else if (ageAsInt < 0) {
            std::cout << "\nYou are not eligible to vote!";
        } else {
            std::cout << "\nPlease input your age (a positive integer).";
        }
    } catch (std::invalid_argument) {
            std::cout << "\nPlease input your age (a positive integer).";
    }
    std::cout << "\n\nDone." << std::endl;
}
