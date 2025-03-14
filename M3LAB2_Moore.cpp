/*
CSC 134
CH3LAB2
James Moore
DATE: 3/14/2025
This program takes a numerical grade as input and converts it to a letter grade 
*/

#include <iostream>

using namespace std;

int main() {
    // Variable declarations
    int numberGrade;        
    string letterGrade;     

    // Prompt the user for a numerical grade
    cout << "Enter your grade (numerical)" << endl; 
    cin >> numberGrade;    // Take input from the user

    // Determine the letter grade based on the numerical grade
    if (numberGrade <= 100 && numberGrade >= 90) { 
        // If grade is between 90 and 100, assign 'A'
        letterGrade = "A";
    } 
    else if (numberGrade <= 89 && numberGrade >= 80) { 
        // If grade is between 80 and 89, assign 'B'
        letterGrade = "B";
    } 
    else if (numberGrade <= 79 && numberGrade >= 70) { 
        // If grade is between 70 and 79, assign 'C'
        letterGrade = "C";
    } 
    else if (numberGrade <= 69 && numberGrade >= 60) { 
        // If grade is between 60 and 69, assign 'D'
        letterGrade = "D";
    } 
    else if (numberGrade <= 59 && numberGrade >= 0) { 
        // If grade is between 0 and 59, assign 'F'
        letterGrade = "F";
    } 
    else {
        cout << "Input must be 0 - 100"; 
    }

    // Display the letter grade
    cout << "Your letter grade is: " << letterGrade << endl;

    return 0; // End of program
}
