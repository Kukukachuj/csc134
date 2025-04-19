/*
CSC 134
Assignment
James Moore
DATE:
*/

#include <iostream>
#include <iomanip>
using namespace std;

int averageRainfall(){
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


int question3(){
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

int question4(){
    cout << "Fill Later";
}

int question5(){
    cout << "Fill Later";
}

int main(){

    cout << "----------MENU----------" << endl;
    cout << "1) Calculate Average Rainfall " << endl;
    cout << "2) Calculate volume of a hyperrectangle " << endl;
    cout << "3) Roman numeral Conversion " << endl;
    cout << "4) " << endl;
    cout << "5) " << endl;



 
    return 0;
}