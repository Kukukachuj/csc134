/*
    Program Name: Hyperrectangle Volume Calculator
    Author: James Moore
    Course: CSC 134
    Assignment: M5HW-Question 2
    Date: 4/16/25

    Description:
    This program calculates the volume of a hyperrectangle (rectangular prism)
    based on user-provided dimensions: width, length, and height. It validates
    the input to ensure that all dimensions are positive non-zero values. If
    any dimension is invalid, the program displays an error message and exits.

    Functions:
    - bool validation(double side):
        Validates a single dimension of the hyperrectangle. Returns true if the
        dimension is invalid (zero or negative), otherwise returns false.

    Input:
    - Width, Length, and Height of the hyperrectangle (double values).

    Output:
    - The calculated volume of the hyperrectangle if all inputs are valid.
    - An error message if any input is invalid.

    Usage:
    - Run the program and enter the dimensions when prompted.
    - Ensure all dimensions are positive non-zero values.
*/


#include <iostream>
#include <iomanip>
using namespace std;

bool validation(double side){
    // Return true if side is invalid (zero or negative), false otherwise.
    if (side <= 0){
        return true; // Error occurred
    }
    return false;    // No error
}

int main(){
    double width, length, height, answer;
    bool error = false;
    
    cout << "Enter the hyperrectangle's Width, Length, and Height" << endl;
    
    cout << "Width: ";
    cin >> width;
    error = validation(width);
    if (error) {
        cout << "Error: Sides can't be 0 or negative values" << endl;
        return 1;
    }
    
    cout << "Length: ";
    cin >> length;
    error = validation(length);
    if (error) {
        cout << "Error: Sides can't be 0 or negative values" << endl;
        return 1;
    }
    
    cout << "Height: ";
    cin >> height;
    error = validation(height);
    if (error) {
        cout << "Error: Sides can't be 0 or negative values" << endl;
        return 1;
    }
    
    answer = width * length * height;
    cout << "Volume: " << answer << endl;
    
    return 0;
}
