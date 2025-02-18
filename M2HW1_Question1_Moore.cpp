/*   
CSC 134
M2HW1(Question 1) - Silver
James Moore
02/8/2025

Summery : This program allows a user to input their name, starting account balance, deposit amount, and withdrawal amount. 
It then calculates and displays the final account balance. 
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Set the precision for floating-point output
    cout << setprecision(2) << fixed << showpoint;

    // Declare variables
    double acctBalance;
    string name;  
    float startBal, depositAmt, withdrawlAmt;

    // Get the user's name
    cout << " Welcome to BIGBAGBANKS! Lets get your name: ";
    getline(cin, name);

    // Get the starting account balance
    cout << endl;
    cout << "Welcome " << name << "!" << endl;
    cout << "Please enter your starting account balance: $";
    cin >> startBal;
    cout << endl;

    // Get the deposit amount
    cout << "How much would you like to deposit?: $";
    cin >> depositAmt;

    // Get the withdrawal amount
    cout << "Withdrawal amount?: $";
    cin >> withdrawlAmt;

    // Calculate the account balance
    acctBalance = startBal + depositAmt;
    acctBalance = acctBalance - withdrawlAmt;

    // Display the account information
    cout << "Name on account: " << name << endl;
    cout << "Account Number: ****** " << endl;
    cout << "Account Balance: $" << acctBalance << endl;

    // End the program
    cout << "Thank you for using BIGBAGBANKS!" << endl;
    return 0;
}