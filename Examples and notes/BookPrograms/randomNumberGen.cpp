#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{  
    int r = rand() % 80; // Generate a single digit (0 to 9)
    cout << r << endl;

    int ra = rand() % 80; // Generate a single digit (0 to 9)
    cout << ra << endl;

    return 0; // Exit program

}