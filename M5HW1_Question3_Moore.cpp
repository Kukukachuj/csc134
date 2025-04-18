/*
    Program: Roman Numeral Converter
    Author: James Moore
    Course: CSC 134
    Assignment: M5HW1 Question 3
    Date: 4/17/25

    Description:
    This program converts a user-provided integer (between 1 and 10) into its 
    corresponding Roman numeral representation. The user is prompted to enter 
    a number, and the program validates the input to ensure it falls within 
    the specified range. If the input is valid, the program calculates the 
    Roman numeral equivalent using conditional logic and loops where necessary. 
    If the input is invalid, an error message is displayed.

    Input:
    - An integer between 1 and 10 entered by the user.

    Output:
    - The Roman numeral equivalent of the entered integer, or an error message 
      if the input is invalid.

    Logic:
    - Numbers 1 to 3 are represented by repeating "I".
    - Number 4 is represented by "IV".
    - Number 5 is represented by "V".
    - Numbers 6 to 8 are represented by "V" followed by the appropriate number 
      of "I"s.
    - Number 9 is represented by "IX".
    - Number 10 is represented by "X".
    - Any input outside the range 1 to 10 results in an error message.

    Example:
    Input: 4
    Output: The Roman numeral version of 4 is IV.
*/

#include <string>
#include <iostream>
using namespace std;

int main(){
int number;
string answer;

cout << "Enter a number (1 - 10): " ;
cin >> number;

if (number >= 1 && number <= 3) {
    answer = "";
    for (int i = 0; i < number; i++) {
        answer += "I";
    }
} else if (number == 4) {
    answer = "IV";
} else if (number == 5) {
    answer = "V";
} else if (number >= 6 && number <= 8) {
    answer = "V";
    for (int i = 5; i < number; i++) {
        answer += "I";
    }
} else if (number == 9) {
    answer = "IX";
} else if (number == 10) {
    answer = "X";
} else {
    cout << "Invalid input. Please enter a number between 1 and 10." << endl;
    return 1;
}

cout << "The Roman numeral version of " << number << " is " << answer << "." << endl;

    return 0;
}
