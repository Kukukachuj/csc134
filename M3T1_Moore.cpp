/*
CSC 134
M3T1
James Moore
DATE: 3/2/2025
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Declare variables for the dimentionsd of the rectangles
    int lengthOne, widthOne, lengthTwo, widthTwo; 
    double areaOne, areaTwo; 
    // Input of the first rectangle
    cout << "Enter the length and width of the first rectangle." << endl;
    cout << "Length: ";
    cin >> lengthOne;
    cout << "Width: ";
    cin >> widthOne;
    // Input of the first rectangle
    cout << "Enter the length and width of the second rectangle." << endl;
    cout << "Length: " ;
    cin >> lengthTwo;
    cout << "Width: ";
    cin >> widthTwo;
    // Calculation to get the area per rectsangle (L * W)
    areaOne = lengthOne * widthOne;
    areaTwo = lengthTwo * widthTwo;
    // Sets the decimal place to two.
    cout << fixed << setprecision(2);
    // Output of the area for each rectangle.
    cout << "The area of the first rectangle is " << areaOne << endl;
    cout << "The area of the second rectangle is " << areaTwo;

    return 0;
}
