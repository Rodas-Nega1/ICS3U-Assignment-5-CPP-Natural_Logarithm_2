// Copyright (c) 2021 Rodas Nega All rights reserved
//
// Created by: Rodas Nega
// Created on: Oct 2021
// This program asks the user to input an integer for
// a sum of terms up to the user's integer then shows result

#include <iostream>


int main() {
    // this function loops all terms to the user inputted integer and
    // outputs a result for a comparison to the natural log of 2

    std::string userNumber;
    float userNumberInt;
    float inverseOperation = -1.0;
    // int startingPoint = 1;
    float sumProcess = 0.0;
    float revisedSum;

    // input
    std::cout << "Enter in a positive integer: ";
    std::cin >> userNumber;
    std::cout << std::endl;

    // process & output
    try {
        userNumberInt = std::stoi(userNumber);
        int endingPoint = userNumberInt;
        for (int startingPoint = 1; startingPoint < endingPoint + 1;
        startingPoint++) {
            inverseOperation *= -1.0;
            sumProcess += inverseOperation * 1.0 / userNumberInt;
            userNumberInt = userNumberInt - 1.0;
        }

        if (sumProcess < 0) {
            revisedSum = sumProcess * -1.0;
        } else {
            revisedSum = sumProcess * 1.0;
        }
        std::cout <<
        "The natural logarithm of 2 is around 0.69314718056..." << std::endl;
        std::cout << "" << std::endl;
        std::cout <<
        "The Log 2 with your amount of terms is: "
        << revisedSum << "." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "That is an invalid integer.";
    }
    std::cout << "\nDone." << std::endl;
}
