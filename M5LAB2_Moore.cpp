/*
CSC 134
M5LAB2
James Moore
DATE:4/8/2025
*/
#include <iostream>
#include <iomanip>
using namespace std;

double length, width, area;
// the getLength,
// getWidth, getArea, and displayData
// functions here.
double getLength(){
    cout << "Enter the length: ";
    cin >> length;
    return length;
}

double getWidth(){
    cout << "Enter the Width: " ;
    cin >> width;
    cout << endl;
    return width;
}

 double getArea(double length, double width){
    area = length * width;
    return area;
}

double displayData(double length, double width, double area){
    cout << "******|------DATA-----|*******"  << endl;
    cout << "******| LENGTH : "  << fixed << setprecision(2) << length <<" |*******" << endl;
    cout << "******|               |*******"  << endl;
    cout << "******| WIDTH  : " << fixed << setprecision(2) << width << " |*******"<< endl;
    cout << "******|               |*******"  << endl;
    cout << "******| AREA :  "  << fixed << setprecision(2) << area <<" |*******" << endl;
    cout << "******|_______________|*******"  << endl;
}
int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
    
	
   double length, width, area;    // The rectangle's lengthwidth,     // The rectangle's width
              // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea(length, width);
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}

//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************