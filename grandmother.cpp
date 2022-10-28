// Copyright (c) 2021 Marshall Demars All rights reserved

// Created by: Marshall Demars
// Created on: October 2022
// This program is tells a user if they can date my grandchild

#include <iostream>

int main() {
    // This function determines if they can date

    int user_age;
    std::string user_age_string;

    // Input
    std::cout << "Enter your age: ";
    std::cin >> user_age_string;

    // Process and Output
    try {
        user_age = std::stoi(user_age_string);

        if (user_age > 40 || user_age < 25) {
            std::cout << "\nYou are not the right age for my grandchild."
            << std::endl;
        } else {
            std::cout << "\nYou are well suited for my grandchild."
            << std::endl;
        }
    }    catch (std::invalid_argument) {
             std::cout << "\nThat was not a valid input." << std::endl;
    }

    std::cout << ("\nDone.") << std::endl;
}
