include <string>
#include <iostream>
using namespace std;

string every_second(string s)
{
   if (s.length() <= 1)
   {

      return /* Your code goes here */;
   }
   else
   {
      string simpler = every_second(/* Your code goes here */);
      return /* Your code goes here */;

   }
}
int main()
{
   string s;
   cin >> s;
   
   cout << every_second(s) << endl;
   
   return 0;
}