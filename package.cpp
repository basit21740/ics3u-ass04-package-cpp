// Copyright (c) 2021 Abdul basit All rights reserved.
//
// Created by: Abdul basit
// Created on: Dec 2021
// This program tells if the package is acceptable or not


#include <iostream>
#include <string>

// this function tels if the package is acceptable or not
int main() {
    int lengthAsNumber;
    std::string length_as_string;
    int widthAsNumber;
    std::string width_as_string;
    int heightAsNumber;
    std::string height_as_string;
    int weightAsNumber;
    std::string weight_as_string;


    std::cout << "Enter length of the package (mm):";
    std::cin >> length_as_string;
    std::cout << "Enter width of the package (mm): ";
    std::cin >> width_as_string;
    std::cout << "Enter height of the package: ";
    std::cin >> height_as_string;
    std::cout << "Enter weight of the package: ";
    std::cin >> weight_as_string;

    try {
        weightAsNumber = std::stoi(weight_as_string);
        heightAsNumber = std::stoi(height_as_string);
        widthAsNumber = std::stoi(width_as_string);
        lengthAsNumber = std::stoi(length_as_string);

        // process
        if (weightAsNumber > 0 && lengthAsNumber > 0 &&\
        widthAsNumber > 0 && heightAsNumber > 0) {
            // Calculation & Check
            if (lengthAsNumber*widthAsNumber*heightAsNumber < 10000) {
                std::cout << "This package is acceptable" << std::endl;
            } else {
                std::cout <<
                "This package is not acceptable because doesn't ";
                std::cout << "meets the requirement of weight";
                std::cout << "= 27kg and volume = 10,000mm³"
                << std::endl;
        } } else {
            std::cout << "Dimensions and weight must be positive" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input" << std::endl;
        }
    // output finished
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
