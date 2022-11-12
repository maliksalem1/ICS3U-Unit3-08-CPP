// Copyright (c) 2022 maliksalem1
//
// Created by: maliksalem1
// Created on: Oct 2022
// This program checks if the year is a leap year

#include <iostream>
#include <string>

int yearInt;
std::string yearString;

int main() {
    // finds if the chosen year is a leap year or not

    std::cout << "Enter a year: ";
    std::cin >> yearString;
    std::cout << std::endl;
    try {
        yearInt = std::stoi(yearString);
        if (yearInt > 0) {
            if (yearInt % 4 == 0) {
                if (yearInt % 100 != 0) {
                    std::cout << "" << yearString << " is a leap year." << std::endl;
                } else if (yearInt % 400 != 0) {
                    std::cout << "" << yearInt << " is not a leap year." << std::endl;
                } else {
                    std::cout << "" << yearString << " is a leap year." << std::endl;
                }
            } else {
                std::cout << "" << yearString << " is not a leap year." << std::endl;
            }
        } else {
            std::cout << yearString << " is not a valid year." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "" << yearString << " is not a valid input." << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
