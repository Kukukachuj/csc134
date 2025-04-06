/*
CSC 134
M5T2
James Moore
DATE:4/5/25
*/


#include <iostream>
#include <iomanip>
using namespace std;

void printAnswer(int sqrNum, int firstNum ){
    cout <<  firstNum << " Squared = " << sqrNum << endl;
    
}

int square(int number){
    int sqrNum = number * number;
    printAnswer(sqrNum, number);
    return sqrNum;

}


int main(){

    for (int i = 1; i < 11; i++){ 
            square(i);
    }
    return 0;
}