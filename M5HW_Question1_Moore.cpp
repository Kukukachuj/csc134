/*
CSC 134
M5HW
James Moore
4/8/2025
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Declare variables for month names and rainfall amounts
    string monthOne, monthTwo, monthThree;
    double rainfallOne, rainfallTwo, rainfallThree, avgRain, totalRain;

    // Get input for first month and its rainfall amount
    cout << "Enter month: ";
    cin >> monthOne;
    cout << "Enter rainfall for " << monthOne << ": ";
    cin >> rainfallOne;

    // Get input for second month and its rainfall amount
    cout << "Enter month: ";
    cin >> monthTwo;
    cout << "Enter rainfall for " << monthTwo << ": ";
    cin >> rainfallTwo;

    // Get input for third month and its rainfall amount
    cout << "Enter month: ";
    cin >> monthThree;
    cout << "Enter rainfall for " << monthThree << ": ";
    cin >> rainfallThree;

    // Calculate total rainfall and average rainfall
    totalRain = rainfallOne + rainfallTwo + rainfallThree;
    avgRain = totalRain / 3;

    // Display the calculated average rainfall
    cout << "The average rainfall for " << monthOne << ", " << monthTwo << ", and " << monthThree
         << " is " << fixed << setprecision(2) << avgRain << " inches.";

    return 0;
}
