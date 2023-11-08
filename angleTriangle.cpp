// Copyright (c) 2023 Noah Smith All rights reserved.
//
// Created by: Noah Smith
// Date: Nov. 6th, 2023
// This program asks the user to enter two of the angles of a triangle
// then tells the user if the type of triangle it is
#include <iostream>

    int
    main() {
    // Declare variables
    int angleAInt, angleBInt, angleC;
    std::string angleAString, angleBString;

    // Getting the first angle from the user
    std::cout << "Enter angle a: ";
    std::cin >> angleAString;
    std::cout << std::endl;

    // Getting the second angle from the user
    std::cout << "Enter angle b: ";
    std::cin >> angleBString;
    std::cout << std::endl;

    try {
        // convert the angles to an int
        angleAInt = std::stoi(angleAString);
        try {
            angleBInt = std::stoi(angleBString);

            angleC = 180 - angleAInt - angleBInt;

            // Finding the type of triangle
            if (angleAInt == angleBInt) {
                if (angleAInt == 60) {
                    std::cout << "The triangle is equilateral.\n";
                } else {
                    std::cout << "The triangle is isosceles.\n";
                }
            } else if (angleC <= 0 || angleAInt <= 0 || angleBInt <= 0) {
                std::cout << "It is not possible for the angles " << angleAInt;
                std::cout << " and " << angleBInt;
                std::cout << " to make up a triangle." << std::endl;
            } else if (angleAInt == angleBInt ||
angleAInt == angleC || angleBInt == angleC) {
                std::cout << "The triangle is isosceles.\n";
            } else {
                std::cout << "The triangle is scalene.\n";
            }
        } catch (std::exception) {
            // The user did not enter an integer
            std::cout << angleBString << " is not an integer.\n";
        }
    } catch (std::exception) {
        // The user did not enter an integer
        std::cout << angleAString << " is not an integer.\n";
    }
}
