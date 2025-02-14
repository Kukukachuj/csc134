// csc 134
// M2T2
// Moore
// 2/14/25

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declare a string variable to store the user's name
    string name;
    cout << "Please enter your name: ";
    cin >> name; // Read the user's name

    // Declare an integer variable to store the number of apples
    int num_apples;
    cout << "Enter how many apples you have: ";
    cin >> num_apples; // Read the number of apples

    // Declare a double variable to store the price of each apple
    double price_each;
    cout << "How much does each apple cost? :";
    cin >> price_each; // Read the price of each apple
    cout << endl;

    // Display a welcome message
    cout << "Welcome to " << name << " apple farm!\n" << endl;
    cout << "We have " << num_apples << " apples in stock" << endl;
    cout << "Each apple costs $" << price_each << endl << endl;

    // Calculate the total price for all apples
    double total_price = num_apples * price_each;

    // Display the total price
    cout << "The total price for all " << num_apples;
    cout << fixed << setprecision(2); // Sets 2 decimal places
    cout << " apples is: $" << total_price << endl;
    cout << "Thanks for coming by!" << endl;

    return 0; // End of the program
}