// Copyright (C) 2020 St. Mother Teresa HS All rights reserved
//
// created by Ryan Nguyen
// Created on December 2020
// This program decides if a package will be
//     accepted based on weight and calculated volume


#include <iostream>
#include <string>
#include <cmath>

int main() {
    // this function calculates volume

    // declaring constants
    std::string weightAsString;
    int weightAsNumber;

    std::string lengthAsString;
    int lengthAsNumber;

    std::string widthAsString;
    int widthAsNumber;

    std::string heightAsString;
    int heightAsNumber;

    // input
    // weight
    std::cout << "Enter package weight: ";
    std::cin >> weightAsString;

    // length
    std::cout << "Enter length: ";
    std::cin >> lengthAsString;
    // width
    std::cout << "Enter width: ";
    std::cin >> widthAsString;
    // height
    std::cout << "Enter height: ";
    std::cin >> heightAsString;

    // process + output
    try {
        weightAsNumber = std::stoi(weightAsString);
        lengthAsNumber = std::stoi(lengthAsString);
        widthAsNumber = std::stoi(widthAsString);
        heightAsNumber = std::stoi(heightAsString);
        // positive if statement
        if (weightAsNumber > 0 && lengthAsNumber > 0 &&\
        widthAsNumber > 0 && heightAsNumber > 0) {
            // weight check
            if (weightAsNumber < 27) {
                // volume calculation + check
                if (lengthAsNumber*widthAsNumber*heightAsNumber < 10000) {
                    std::cout << "We will accept your package!";<< std::endl;
                } else {
                std::cout << "Volume must not exceed 10 000cm³";<< std::endl;
            } else {
                std::cout << "Weight must not exceed 27kg";<< std::endl;
        } else {
            std::cout << "Dimensions and weight must be positive";<< std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid integer";<< std::endl;
        }
}