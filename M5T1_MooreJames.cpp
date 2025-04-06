/*
CSC 134
M5T1
James Moore
DATE:4/5/25
*/

#include <iostream>
#include <string>
using namespace std;

string formatAnswer(int answer);
void printAnswer(string msg);
int main(){
    int answer = 5;
    string message;
    message = formatAnswer(answer);
    printAnswer (message);
    return 0;
}
string formatAnswer(int answer){
    string answerMessage;
    answerMessage = "The answer is ";
    answerMessage += to_string(answer);
    return answerMessage;

}
void printAnswer (string msg) {
    cout << msg << endl;
}


