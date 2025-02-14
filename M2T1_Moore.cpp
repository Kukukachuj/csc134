// csc 134
// M2T1
// Moore
// 2/14/25

#include <iostream>

using namespace std;

int main()
{
    string name = "James's"; // Name 
    int num_apples = 10;
    double price_each = 0.25;


    cout << "Welcome to  " << name << " apple farm!\n" << endl;
    cout << "We have " << num_apples << " apples in stock" << endl;
    cout << "Each apple costs $" << price_each << endl << endl;

    double total_price = num_apples * price_each;
    
    cout << "The total price for all " << num_apples;
    cout << " apples is: $" << total_price <<endl;
    cout << "Thanks for coming by!" << endl;
    return 0;
}