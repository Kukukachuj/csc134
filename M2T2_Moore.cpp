// csc 134
// M2T2
// Moore
// 2/14/25

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string name;
    cout << "Please enter your name: ";
    cin >> name; // Name 
    int num_apples ;
    cout << "Enter how many apples you have: ";
    cin >> num_apples;
    double price_each;
    cout << "How much does each apple cost? :";
    cin >> price_each; 
    cout << endl; 


    cout << "Welcome to  " << name << " apple farm!\n" << endl;
    cout << "We have " << num_apples << " apples in stock" << endl;
    cout << "Each apple costs $" << price_each << endl << endl;
    
    double total_price = num_apples * price_each;
    
    cout << "The total price for all " << num_apples;
    cout << fixed << setprecision(2);
    cout << " apples is: $" << total_price << endl;
    cout << "Thanks for coming by!" << endl;
    return 0;
}