// Copyright by : Anastasia Friedenstein Patino
// Created on : November.7, 2023
// Program that determines the sum of all umbers up to positive integer

#include <iostream>
#include <string>

int main() {
    int counter = 0;
    int sum = 0;
    std::string positive_integer_as_string;

    std::cout << "Please enter a positive integer: ";
    std::cin >> positive_integer_as_string;

    try {
        int positive_integer_as_int = std::stoi(positive_integer_as_string);

        while (counter <= positive_integer_as_int) {
            sum = sum + counter;
            counter = counter + 1;
        }

        std::cout << "Sum of numbers is " << sum << std::endl;
    } catch (std::invalid_argument const& ex) {
        std::cout << "Not a valid integer" << std::endl;
    }

    return 0;
}
