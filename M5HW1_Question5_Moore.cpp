/*
Author: James Moore
Course: CSC 134
Assignment: M5HW_Question 5
Date: 4/18/25

This program calculates and displays the distance traveled by a vehicle 
for each hour of a given time period, based on the speed of the vehicle 
in miles per hour (MPH) and the total hours traveled.

Program Details:
- The user is prompted to input the speed of the vehicle in MPH.
- The user is then prompted to input the total hours the vehicle traveled.
- The program calculates the distance traveled for each hour using the formula:
    distance = speed * time
- The results are displayed in a tabular format, showing the hour and the 
    corresponding distance traveled.

Input:
- Speed of the vehicle in MPH (integer)
- Total hours traveled (integer)

Output:
- A table displaying the hour and the distance traveled for each hour.

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
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