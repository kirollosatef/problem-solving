/*5) write a program that accepts a number from the user and print if it is even or odd number.*/
#include <iostream>
using namespace std;
int main ()
{
  int x ;
  cout << "enter the num \n";
  cin >> x;
  if ( x % 2 == 0)
  cout << " this num is even \n";
  else 
  cout << " this num is odd \n";
  return 0;
}