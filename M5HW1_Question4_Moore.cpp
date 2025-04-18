    /*
    Program: Geometry Calculator
    Author: James Moore
    Course: CSC 134
    Assignment: M5HW1 Question 4
    Date: 4/17/25

    Description:
    This program is a simple Geometry Calculator that allows the user to calculate
    the area of a circle, rectangle, or triangle. The user is presented with a menu
    to choose the desired calculation or to quit the program. The program performs
    the following tasks:
    1. Calculates the area of a circle given its radius.
    2. Calculates the area of a rectangle given its length and width.
    3. Calculates the area of a triangle given its base and height.
    4. Allows the user to exit the program.

    Features:
    - Input validation for menu selection.
    - Uses constants for mathematical values (e.g., PI for circle area calculation).
    - Loops until the user chooses to quit.

    Usage:
    - Run the program.
    - Enter a choice from the menu (1-4).
    - Provide the required dimensions for the selected shape.
    - View the calculated area or an error message for invalid input.
    - Select option 4 to exit the program.
    */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

bool leaveProgram = false;

int main() {

while (leaveProgram == false){
    string choice;
    cout << "Geometry Calculator" << endl;
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    if (choice == "1" ){
        double radius, circleArea;
        const  double PIE = 3.14159;
        cout << "What is the radius of the circle: " << endl;
        cin >> radius;
        circleArea = PIE*(sqrt(radius));
        cout << "Area: " << circleArea << endl;;
    }

    else if(choice == "2"){
        int length, width, rectangleArea;
        cout << "Enter the length: ";
        cin >> length;
        cout << "Enter the width: ";
        cin >> width;
        rectangleArea = length * width;
        cout << "Area: " << rectangleArea << endl;
    }

    else if(choice == "3"){
        double base, height, triangleArea;
        cout << "Enter  the triangles base: ";
        cin >> base;
        cout << "Enter the height: ";
        cin >> height;
        triangleArea = base * height * 0.5;
        cout << triangleArea << endl;
    }

    else if(choice == "4"){
        leaveProgram = true;
    }

    else{
        cout << "Invalid Option" << endl;
    }
} 

    return 0;
}
