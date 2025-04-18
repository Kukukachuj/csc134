#include <iostream>
#include <iomanip>
using namespace std;

int main(){
int valueTwo = 6;
int* value = &valueTwo;

cout << *value << "\n";
cout << &value << "\n";

*value = 10;
int* i = value;

cout << *value << "\n";
cout << &value << "\n";
cout << i << "\n";
cout << *i << "\n";
    return 0;
}