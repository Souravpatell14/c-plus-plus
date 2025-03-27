(1) Write a program to take user input and print it.

#include <iostream>

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;  // Takes input from the user

    std::cout << "You entered: " << number << std::endl;

    return 0;
}


(2) Write a program to swap two numbers using a temporary variable.

#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    temp = a;
    a = b;
    b = temp;
    
    cout << "After swapping: a = " << a << ", b = " << b;
    
    return 0;
}