/*
CSC 134
M3HW1_Question4
James Moore
DATE:3/7/2025
*/

#include <iostream>
#include <cstdlib>
#include <ctime> // Needed for time()

using namespace std;

int main()
{  
    int randNumOne, randNumTwo, answer;
    string mathType;

    int answersRight = 0;
    int answersWrong = 0;
    int roundNumber = 0;
    string keepGoing = "Y";

    srand(time(0)); // Set a unique seed for random number generation once

    while (keepGoing == "Y") {
        string nextProblem = "1";
        cout << "=========== Practice Math ==============" << endl;
        cout << "First, pick which math operation you would like to use" << endl;
        cout << " Type: \n + for addition \n - for subtraction \n * for multiplication \n / for division \n";
        cout << "Enter here: "; 
        cin >> mathType;

        while (nextProblem == "1") {
            cout << string(50, '-') << endl;
            cout << "Scored Right: " << answersRight << string(5, ' ') << "Scored Wrong: " << answersWrong << endl;
            cout << string(50, '-') << endl;
            // Generate random numbers
            randNumOne = rand() % 10; // Random number between 0 and 9
            randNumTwo = (rand() % 10) + 1; // Random number between 1 and 10 (non-zero)

            roundNumber++; // Increment problem number

            int rightAnswer;
            if (mathType == "+") {
                rightAnswer = randNumOne + randNumTwo;
                cout << "Problem " << roundNumber << ": " << randNumOne << " + " << randNumTwo << " = ";
            } else if (mathType == "-") {
                rightAnswer = randNumOne - randNumTwo;
                cout << "Problem " << roundNumber << ": " << randNumOne << " - " << randNumTwo << " = ";
            } else if (mathType == "*") {
                rightAnswer = randNumOne * randNumTwo;
                cout << "Problem " << roundNumber << ": " << randNumOne << " * " << randNumTwo << " = ";
            } else if (mathType == "/") {
                rightAnswer = randNumOne / randNumTwo; // Division
                cout << "Problem " << roundNumber << ": " << randNumOne << " / " << randNumTwo << " = ";
            } else {
                cout << "Invalid math operation! Returning to main menu..." << endl;
                break;
            }

            // Get user's answer
            cin >> answer;

            // Check if the answer is correct
            if (rightAnswer == answer) {
                cout << "That's correct!" << endl;
                answersRight++;
            } else {
                cout << "That's incorrect. The correct answer is: " << rightAnswer << endl << endl ;
                answersWrong++;
            }

            // Ask if the user wants to continue or change settings
            cout << "Enter '1' for the next problem or 'N' to return to the main menu: ";
            cin >> nextProblem;
        }

        // Ask if the user wants to keep going after returning to main menu
        cout << "Would you like to keep going? 'Y' for yes, 'N' for no: ";
        cin >> keepGoing;    
    }

    // Print final summary
    cout << "Thanks for practicing math!" << endl;
    return 0;
}
