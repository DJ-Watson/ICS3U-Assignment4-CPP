// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: DJ Watson
// Created on: October 2019
// program calculates the average between the numbers


#include <iostream>
#include <string>


int main() {
    // variables
    std::string ing1;
    std::string ing2;
    std::string ing3;
    int num1;
    int num2;
    int num3;
    int answer;
    // input
    std::cout << "enter first number (1-100): ";
    std::cin >> ing1;
    std::cout << "enter second number (1-100): ";
    std::cin >> ing2;
    std::cout << "enter third number (1-100): ";
    std::cin >> ing3;
    std::cout << std::endl;
    // process
    try {
        num1 = std::stoi(ing1);
        num2 = std::stoi(ing2);
        num3 = std::stoi(ing3);
        if ((num1 < 0) || (num1 > 100) || (num2 < 0) || (num2 > 100) ||
           (num3 < 0) ||  (num3 > 100)) {
            std::cout << "invalid input";
        } else {
            answer = (num1+num2+num3)/3;
            std::cout << answer;
        }
    } catch (std::invalid_argument) {
        std::cout << "invalid input";
    }
}
