/*
CSC 134
M2HW1(Question 3) - Silver
James Moore
02/8/2025

Summary:
This program calculates the number of pizza slices left after a party. 
*/

#include <iostream>

using namespace std;

int main()
{
    // Declare constants and variables
    const int SLICES_PER_PIZZA = 8;
    int orderAmt, visitorAmt, slicesLeft; 

    // Get the number of pizzas ordered
    cout << "How many pizza's have been ordered?: ";
    cin >> orderAmt;

    // Get the number of guests
    cout << "Enter the amount of guests: ";
    cin >> visitorAmt;

    // Calculate the number of slices left
    slicesLeft = (orderAmt * SLICES_PER_PIZZA) - (visitorAmt * 3);

    // Display the number of slices left
    cout << "Your party will have " << slicesLeft << " slices left";

    // End the program
    return 0;
}