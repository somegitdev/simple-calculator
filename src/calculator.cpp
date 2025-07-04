// src/calculator.cpp : This file contains the 'main' function for the calculator.
// This is the core logic of your simple C++ console calculator.

#include <iostream> // Required for input/output operations (cin, cout)
#include <limits>   // Required for numeric_limits to clear input buffer

// Function to display the menu and get user choice
int displayMenu() {
    int choice;
    std::cout << "\n--- Simple Calculator Menu ---\n";
    std::cout << "1. Addition (+)\n";
    std::cout << "2. Subtraction (-)\n";
    std::cout << "3. Multiplication (*)\n";
    std::cout << "4. Division (/)\n";
    std::cout << "5. Exit\n";
    std::cout << "Enter your choice (1-5): ";
    // Loop to ensure valid integer input between 1 and 5
    while (!(std::cin >> choice) || choice < 1 || choice > 5) {
        std::cout << "Invalid input. Please enter a number between 1 and 5: ";
        std::cin.clear(); // Clear the error flag on cin
        // Ignore remaining characters in the input buffer up to the newline
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    return choice;
}

// Function to get two numbers from the user
// Uses pass-by-reference (&) to modify num1 and num2 directly
void getNumbers(double& num1, double& num2) {
    std::cout << "Enter the first number: ";
    // Loop to ensure valid double input for num1
    while (!(std::cin >> num1)) {
        std::cout << "Invalid input. Please enter a valid number: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    std::cout << "Enter the second number: ";
    // Loop to ensure valid double input for num2
    while (!(std::cin >> num2)) {
        std::cout << "Invalid input. Please enter a valid number: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

int main() {
    double num1, num2, result; // Declare variables for numbers and result
    int choice; // Declare variable for menu choice

    do {
        choice = displayMenu(); // Call function to display menu and get choice

        // Check if a calculation option (1-4) was chosen
        if (choice >= 1 && choice <= 4) {
            getNumbers(num1, num2); // Call function to get the two numbers from user

            // Perform operation based on user's choice using a switch statement
            switch (choice) {
                case 1: // Addition
                    result = num1 + num2;
                    std::cout << "Result: " << num1 << " + " << num2 << " = " << result << std::endl;
                    break;
                case 2: // Subtraction
                    result = num1 - num2;
                    std::cout << "Result: " << num1 << " - " << num2 << " = " << result << std::endl;
                    break;
                case 3: // Multiplication
                    result = num1 * num2;
                    std::cout << "Result: " << num1 << " * " << num2 << " = " << result << std::endl;
                    break;
                case 4: // Division
                    if (num2 != 0) { // Check for division by zero to prevent runtime errors
                        result = num1 / num2;
                        std::cout << "Result: " << num1 << " / " << num2 << " = " << result << std::endl;
                    } else {
                        // Inform the user about the division by zero error
                        std::cout << "Error: Division by zero is not allowed.\n";
                    }
                    break;
            }
        } else if (choice == 5) { // If the user chose to exit
            std::cout << "Exiting calculator. Goodbye!\n";
        }

    } while (choice != 5); // Continue the loop until the user chooses option 5 (Exit)

    return 0; // Indicate successful program execution
}