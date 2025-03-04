//CSC-134
//CH3LAB1
//James Moore
//3/4/2025

#include <iostream>
using namespace std;

int main() {
    
    string choice; 

    cout << "A wild tiger appears! Do you choose to fight or run?" << endl;  // Introduction: Describe the scenario to the player
    cout << "Type 'fight' or 'run': ";  // Prompt the player for their choice
    cin >> choice;

    // Make a decision based on the player's choice
    if (choice == "fight") {
        cout << "You chose to fight! You bravely engage in battle." << endl;
    }
    else if (choice == "run") {
        cout << "You chose to run! You successfully escape from danger." << endl;
    }
    else {
        cout << "I'm sorry, that is not a valid choice." << endl;
    }

    cout << "Thanks for playing!" << endl; // ending 
    return 0; 
}