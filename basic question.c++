(1) Write a program to take user input and print it.

#include <iostream>

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;  // Takes input from the user

    std::cout << "You entered: " << number << std::endl;

    return 0;
}