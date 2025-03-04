/*
CSC 134
M3T2
James Moore
DATE:3/3/2025
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
// Declare variables for the dimentionsd of the rectangles
 int lengthOne, widthOne, lengthTwo, widthTwo; 
 int areaOne, areaTwo; 
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

// Seperators for ethetics 
 cout << "==========================================" << endl;
 cout << "==========================================" << endl;

 // Output of the area for each rectangle.]
 cout << "The area of the first rectangle is " << areaOne << endl;
 cout << "The area of the second rectangle is " << areaTwo << endl;

 // Seperators for ethetics 
 cout << "==========================================" << endl;
 cout << "==========================================" << endl;
 
 // Checks which rectangle has the largest area and lets the user know. 
if (areaOne > areaTwo){
    cout << "The first rectangle with a area of " << areaOne << " is larger then the second rectangles area of " << areaTwo;
    }
else if (areaOne < areaTwo){
    cout << "The second rectangle with a area of " << areaTwo << " is larger then the first rectangles area of " << areaOne;
    }
else {
    cout << " Both rectazngles have the same area of " << areaOne;
}
cout << "\n\n\n\n";

return 0;
}
