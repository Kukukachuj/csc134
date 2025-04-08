/*
CSC 134
CH5LAB1
James Moore
DATE:4/8/2025
*/

#include <iostream>
#include <iomanip>
using namespace std;
int selection;
string user;

void lostWalletMystery(string userName){
    cout << "\"-------The Lost Wallet Mystery\"-------" << endl;
    cout << userName << " was certain he had just seen his wallet." << endl;
    cout << "Five minutes ago, it was right there on the kitchen counter. Or maybe the coffee table? The jacket pocket? No-the jacket was still in the car." << endl;
    cout << "He checked under the couch (where things always mysteriously ended up). No wallet, but three missing socks and a receipt from a restaurant he swore he\'d never been to. Odd"<< endl;
    cout << "Then, a knock at the door." << endl;
    cout << userName << " opened it to find a package on his doorstep. No label. No sender. Just his name, written in a strangely familiar handwriting." << endl;
    cout << "Inside? His wallet." << endl;
    cout << "But something was off. It had been refilled—cash untouched, cards in place, but one extra item sat neatly inside: A small, folded note." << endl;
    cout << "\"You dropped this. But next time, be more careful.\"" << endl;
    cout << "No signature." << endl;
    cout << userName << " stood there, confused and slightly unnerved. Who returned it? How did they know where he lived? More importantly—what was he supposed to be careful about?!" << endl;
    cout << "The mystery had only just begun." << endl;
}

void  neighborhoodRiddle(string userName){
    cout << userName <<" found a mysterious note under his welcome mat:" << endl;
    cout <<"\"Find the hidden bench. Look underneath.\"" << endl;
    cout << "Curious, he searched the neighborhood and found an old, forgotten bench tucked behind hedges. Taped underneath was another note:" << endl;
    cout <<"\"You\'re on the right path.\"" << endl;
    cout <<" On the back, a familiar street name—his childhood street. There, pinned to a tree from his past, was one last message:" << endl;
    cout << "\"Some things stay the same, even when you forget them. Welcome home.\"" << endl;
    cout << userName << " stood still. Maybe this wasn\'t just a game." << endl;
}

void roadTrip(string userName){
    cout << "\"--------The Unexpected Road Trip------\"" << endl;
cout << userName << " received a text: "<< "Grab your bag. No questions. We\'re leaving." << endl;
cout << "It was from his best friend, Alex—who was known for spontaneous chaos. " << endl;
cout << "Before " << userName <<" could protest, a car pulled up outside." << endl;
cout << "Chapter 1: The Mysterious Destination" << endl;
cout << userName << " threw together a bag, got in the car, and only then asked, \"Where are we going?\"" << endl;
cout << "Alex grinned. \"You’ll see.\"" << endl;
cout << "Hours passed. They stopped for snacks. Saw a llama farm. Took a wrong turn that led to an abandoned gas station where the clerk only spoke in riddles." << endl;
cout << " And finally, just as the sun started setting—Alex pulled into the last place James ever expected." << endl;
cout << "Chapter 2: The Reason Behind It All" << endl;
cout << userName << "stepped out and stared." << endl;
cout << "It was his childhood vacation spot—a tiny, hidden lake they hadn\'t visited in years." << endl;
cout << "\"You kept saying you missed this place,\" Alex said, tossing " << userName << " a set of fishing gear." << endl;
cout << userName << " blinked. He hadn\"t realized how much he needed this. Sometimes, the best trips are\"t planned." << endl;

}

int menu(){
    cout << "--------MENU---------" << endl;
    cout << "1) \"The Lost Wallet Mystery\" - You misplaced your wallet, but something isn\'t adding up. Every clue leads to a stranger twist. By the end, you\'re uncovering secrets you never meant to find."
   << endl;
    cout << "2)\"The Neighborhood Riddle\" - A cryptic note appears on your doorstep. It leads to a puzzle involving hidden objects, forgotten landmarks, and a mystery only you can solve." << endl;
    cout << "3) \"The Unexpected Road Trip\"- A friend texts you: \"Grab your bag. No questions. We\'re leaving.\" You hesitate… but something tells you this trip will change everything." << endl;
    cout << "4) Exit Program" << endl;
    cout << "Enter Your Selection here: " ;
    cin >> selection;
    cout << endl;
    return selection;
}
int main(){
    cout <<  "Enter your name to begin: ";
    cin >> user;
    int menuSelection = menu();

    while (menuSelection != 4){

        if (menuSelection == 1){
        lostWalletMystery(user);
        }
        else if (menuSelection == 2){
        neighborhoodRiddle(user);
        }
        else if (menuSelection == 3){
        roadTrip(user);
        } 

        // Prompt for a new menu selection
        menuSelection = menu();
    }
        
        
    return 0;
}
