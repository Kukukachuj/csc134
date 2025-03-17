/*
CSC 134
M4LAB1_Moore
James Moore
DATE: 3/17/25
The program takes user input for height and width, 
then uses nested loops to print a rectangular block of asterisks (*) with the specified dimensions.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
int hieght, width;

cout << " Enter the hieght ";
cin >> hieght;
cout << " Enter the width ";
cin >> width;

for (int i = 0; i < hieght; i++){
    for (int j = 0; j < width; j++){
        cout << "* ";
    }
    cout << "\n";
}


    return 0;
}
