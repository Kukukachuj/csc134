/*
CSC 134
M2HW1 - GOLD
James Moore
2/18/2025
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setprecision(2) << fixed << showpoint;
    double acctBalance;
    string name;  //Welcome message getting name variable
    cout << " Welcome to BIGBAGBANKS! Lets get your name: " ;
    getline (cin, name);
    
    float startBal;
    cout << endl;
    cout << "Welcome " << name << "!" << endl;
    cout << "Please enter your starting account balence:$";
    cin >> startBal;
    cout << endl;

    float depositAmt;
    cout << "How much would you like to deposite?: $";
    cin >> depositAmt;

    float withdrawlAmt;
    cout << "withdrawal amount?: $";
    cin >> withdrawlAmt;

    acctBalance = startBal + depositAmt;
    acctBalance = acctBalance - withdrawlAmt;

    cout << "Name on account: " << name << endl;
    cout << "Account Number: ****** " << endl;

    cout << "Account Balence: $" << acctBalance << endl;

    return 0;
}