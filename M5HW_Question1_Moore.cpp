/*
    Program: Average Rainfall Calculator
    Author: James Moore
    Date: 4/8/2025
    Course: CSC 134
    Assignment: M5HW1_Question1

    Description:
    This program calculates the average rainfall over three months. 
    The user is prompted to input the names of three months and the 
    corresponding rainfall amounts for each month. The program then 
    computes the total rainfall and the average rainfall, displaying 
    the results formatted to two decimal places.

    Input:
    - Names of three months (string)
    - Rainfall amounts for each month (double)

    Output:
    - The average rainfall for the three months, formatted to two decimal places.

    Example:
    Enter month: January
    Enter rainfall for January: 3.5
    Enter month: February
    Enter rainfall for February: 2.8
    Enter month: March
    Enter rainfall for March: 4.1
    The average rainfall for January, February, and March is 3.47 inches.
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   
    string monthOne, monthTwo, monthThree;
    double rainfallOne, rainfallTwo, rainfallThree, avgRain, totalRain;

    
    cout << "Enter month: ";
    cin >> monthOne;
    cout << "Enter rainfall for " << monthOne << ": ";
    cin >> rainfallOne;

    
    cout << "Enter month: ";
    cin >> monthTwo;
    cout << "Enter rainfall for " << monthTwo << ": ";
    cin >> rainfallTwo;

    
    cout << "Enter month: ";
    cin >> monthThree;
    cout << "Enter rainfall for " << monthThree << ": ";
    cin >> rainfallThree;

    
    totalRain = rainfallOne + rainfallTwo + rainfallThree;
    avgRain = totalRain / 3;

    
    cout << "The average rainfall for " << monthOne << ", " << monthTwo << ", and " << monthThree
         << " is " << fixed << setprecision(2) << avgRain << " inches.";

    return 0;
}
