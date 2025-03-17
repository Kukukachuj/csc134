/*
CSC 134
M4HW1_GOLD
James Moore
DATE:3/17/25
Times table program 
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int firstNum, secondNum, answer; // Declare variables
    secondNum = 12; //Max number for times tabler

    // Input validation loop 
    do {
        cout << "Enter a number from 1 - 12: ";
        cin >> firstNum;

        // Check if input is out of range 
        if (firstNum < 1 || firstNum > 12) {
            cout << "Invalid input. Please enter a number between 1 and 12." << endl;
        }
    } while (firstNum < 1 || firstNum > 12); // Repeat until a valid number ( 1-12) is used
    // Loop to calculate times table
    for (int i = 1; i <= 12; i++) {
        answer = firstNum * i; // Calculate answer
        cout << firstNum << " times " << i << " is " << answer << endl; // Display anser
    }

    return 0; 
}