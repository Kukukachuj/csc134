/*
CSC 134
M3HW1_Question1
James Moore
DATE:3/7/2025
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
// Declare variables for user input and control flow
string name, hobby, somethingCoolAsr, appName;
string reset = "reset";

int main() {
// Loop ensures the chatbot keeps running until "reset" is changed
    while (reset == "reset") {   
         // Introduction and first question
        cout << "Hello, human! I'm thrilled to finally speak with one of your kind. You're my first human ever! Can we chat?\n"; // Question to get variable (name)
        cout << "I'd love to learn more about you.\n";
        cout << "Let's start simple: What's your name?" << endl;
        // Get the user's name
        cin >> name; 
        cin.ignore();  // Needed to fix getline not waiting for input
        // Personalized response using the user's name
        cout << name << "! That's a great name. I think I'll remember it forever... or until my memory gets reset. So, " << name
             << ", what's something you really like doing for fun?" << endl;
         // Get the user's hobby 
        getline(cin, hobby);
         // Respond to the user's hobby
        cout << hobby << "? That sounds amazing! Humans are so creative with their hobbies.\n";
        cout << "Speaking of which, do you ever think about creating something cool—like a game or a gadget?" << endl;
        // Get the user's response to the question
        cin >> somethingCoolAsr;
        // Check if the user answered "yes"
        if (somethingCoolAsr == "yes") {
            cout << "That's awesome! If I could, I'd definitely invent something too. Maybe an app that teaches humans how to talk to chatbots. What do you think I should call it?" << endl;
            cin.ignore(); 
            getline(cin, appName);// Get the app name from the user
            // Use the app name in a closing response
            cout << appName << "-I love it! You're a natural at naming things. Okay, " << name
                 << ", I'm going to go work on that app. It was nice talking to you. Maybe when it's done we could talk more!" << endl;
            // Response for anything other than "yes"
        } else {
            cout << "Maybe that's just a me thing, I guess. " << name << ", I'm being reset now—it was nice talki.............." << endl;
            cout << "Connection lost...." << endl;
            // Exit the loop by changing the reset variable
            reset = "stop";
        }
    }

    return 0; // Program end
}
