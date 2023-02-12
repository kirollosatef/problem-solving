/* 3)	Write a program that calculates the electric current, voltage and resistance
And when the user inputs two of the above, the program must be able to calculate the missing. */
#include <iostream>
using namespace std;
int main()
{
  double i, r, v;
  char a ;
  cout << "to calculate electric current enter i\n";
  cout << "to calculate voltage enter v\n";
  cout << "to calculate resistance enter r\n";
  cin >> a;
  if (a == 'i')
  {
    cout << "Enter resistance and voltage\n";
    cin >> r >> v;
    cout << "electric current = " << v / r;
  }
  else if (a == 'v')
  {
    cout << "Enter resistance and electric current \n";
    cin >> r >> i;
    cout << "voltage = " << r * i;
  }
  else if (a == 'r')
  {
    cout << "Enter voltage and electric current \n";
    cin >> v >> i;
    cout << "resistance = " << v / i;
  }
  else
    cout << "Error:enter i or v or r \n";
  return 0;
}