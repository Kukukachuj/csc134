#include <iostream>

using namespace std;

main()
{
const int SLICES_PER_PIZZA = 8;
int orderAmt, visitorAmt, slicesLeft; 

cout << "How many pizza\'s have been ordered?: ";
cin >> orderAmt;
cout << "Enter the amount of guests: ";
cin >> visitorAmt;

slicesLeft = (orderAmt * 8) - (visitorAmt * 3);

cout << " Your party will have " << slicesLeft << " slices left";

return 0;
}

