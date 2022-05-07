/*Write a program that accepts number from 4 digits and tell if the fourth digit is odd or even number. */
#include <iostream>
#include <string>
using namespace std;
int main()
{
  string a;
  char x;
  cout << "Enter number\n";
  cin >> a;
  x = a[0];
  if (x == '2' || x == '4' || x == '6' || x == '8')
    cout << "even\n";
  else if (x == '1' || x == '3' || x == '7' || x == '9')
    cout << "odd\n";
  else 
  cout <<"Error\n";
  return 0;
}