/**
 * CSC 134
 * M5HW1_Question6
 * Author: James Moore
 * Date: 4/19/2025
 * 
 * This program provides a menu-driven application that performs various tasks:
 * 
 * 1. Calculate Average Rainfall:
 *    - Prompts the user to enter the names of three months and their respective rainfall amounts.
 *    - Calculates and displays the average rainfall for the three months.
 * 
 * 2. Calculate Volume of a Hyperrectangle:
 *    - Prompts the user to enter the width, length, and height of a hyperrectangle.
 *    - Validates that the dimensions are positive values.
 *    - Calculates and displays the volume of the hyperrectangle.
 * 
 * 3. Roman Numeral Conversion:
 *    - Prompts the user to enter a number between 1 and 10.
 *    - Converts the number to its Roman numeral equivalent and displays the result.
 * 
 * 4. Geometry Calculator:
 *    - Provides options to calculate the area of a circle, rectangle, or triangle.
 *    - Prompts the user for the necessary dimensions and performs the calculations.
 *    - Allows the user to quit the geometry calculator.
 * 
 * 5. Distance Traveled:
 *    - Prompts the user to enter the speed of a vehicle (in MPH) and the time traveled (in hours).
 *    - Displays the distance traveled for each hour.
 * 
 * 6. Exit:
 *    - Exits the program.
 * 
 * The program uses a main menu to allow the user to select one of the above options.
 * Input validation is performed where necessary to ensure correct operation.
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int averageRainfall(){
    string monthOne, monthTwo, monthThree;
    double rainfallOne, rainfallTwo, rainfallThree, avgRain, totalRain;
    cout << "Enter first month: ";
    cin >> monthOne;
    cout << "Enter rainfall for " << monthOne << ": ";
    cin >> rainfallOne;
    cout << "Enter second month: ";
    cin >> monthTwo;
    cout << "Enter rainfall for " << monthTwo << ": ";
    cin >> rainfallTwo;
    cout << "Enter third month: ";
    cin >> monthThree;
    cout << "Enter rainfall for " << monthThree << ": ";
    cin >> rainfallThree;

    totalRain = rainfallOne + rainfallTwo + rainfallThree;
    avgRain = totalRain / 3;

    cout << "The average rainfall for " << monthOne << ", " << monthTwo << ", and " << monthThree
         << " is " << fixed << setprecision(2) << avgRain << " inches." << endl;

    return 0;
}
bool hyperrectangleValidation(double side){
    // Return true if side is invalid (zero or negative), false otherwise.
    if (side <= 0){
        return true; // Error occurred
    }
    return false;    // No error
}
int hyperrectangleVolume(){
    
    double width, length, height, answer;
    bool error = false;
    
    cout << "Enter the hyperrectangle's Width, Length, and Height" << endl;
    
    cout << "Width: ";
    cin >> width;
    error =  hyperrectangleValidation(width);
    if (error) {
        cout << "Error: Sides can't be 0 or negative values" << endl;
        return 1;
    }
    
    cout << "Length: ";
    cin >> length;
    error = hyperrectangleValidation(length);
    if (error) {
        cout << "Error: Sides can't be 0 or negative values" << endl;
        return 1;
    }
    
    cout << "Height: ";
    cin >> height;
    error =  hyperrectangleValidation(height);
    if (error) {
        cout << "Error: Sides can't be 0 or negative values" << endl;
        return 1;
    }
    
    answer = width * length * height;
    cout << "Volume: " << answer << endl;
    
    return 0;
}

int romanNumeral(){
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
bool leaveProgram = false;
int geometryCalculator(){
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

int vehicalSpeed(){
    int mph, timeTraveled, distance;

    cout << "Speed of vehical in (MPH): ";
    cin >> mph;
    cout << "How many hours traveled?: ";
    cin >> timeTraveled;
    cout << "Hour Distance Traveled" << endl;
    cout << "--------------------------------" << endl;

    for (int i = 1; i < timeTraveled +1 ; i++){ 
        distance = mph * i;
        cout << i << "              " << distance << endl;
    }
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
    return 0;
}

int main(){
int mainChoice; 
while (mainChoice != 6){
    cout << "----------MENU----------" << endl;
    cout << "1) Calculate Average Rainfall " << endl;
    cout << "2) Calculate volume of a hyperrectangle " << endl;
    cout << "3) Roman numeral Conversion " << endl;
    cout << "4) Geometry Calculator " << endl;
    cout << "5) Distance Traveled" << endl;
    cout << "6) Exit " << endl;
    cout << "Enter Choice: ";
    cin >> mainChoice;

        if (mainChoice == 1 ){
            averageRainfall();
        }
        else if(mainChoice== 2){
            hyperrectangleVolume();
        }
        else if(mainChoice == 3){
            romanNumeral();
        }
        else if(mainChoice == 4){
            geometryCalculator();
        }
        else if(mainChoice == 5){
            vehicalSpeed();
        }
        else if(mainChoice == 6){
            cout << "Program Done";
        }
        else{
            cout << "Wrong selection please select 1 - 6" << endl;
        }
    }
    return 0;
}