/*
CSC 134
M2HW1(Question 4) - Silver
James Moore
02/8/2025

Summary:
This program prompts the user to enter a school name and a team name. It then generates and displays cheer messages using the provided names.
*/

#include <iostream>

using namespace std;

int main()
{
    // Declare variables
    string letsGo = "Let\'s Go", school, team, cheerOne, cheerTwo;

    // Get the school name
    cout << "Enter school name: ";
    getline(cin, school);

    // Get the team name
    cout << "Enter team: ";
    cin >> team;

    // Create cheer messages
    cheerOne = letsGo + " " + school + "\n";
    cheerTwo = letsGo + " " + team + "\n";

    // Display the cheer messages
    cout << cheerOne << cheerOne << cheerOne << cheerTwo;

    // End the program
    return 0;
}