/*1)	Write a calculator program that accepts 2 numbers from the user and the type of operation and print out the output,
Then ask the user if they want continue or not.*/
#include <iostream>
using namespace std;
int main()
{
  int loop = 1;
  double x, y;
  char sin;
  while (loop == 1)
  {
    cout << "Enter number1 & number2 \n";
    cin >> x >> y;
    cout << "Enter your operation\n";
    cin >> sin;
    if (sin == '+')
      cout << x << " + " << y << " = " << x + y << "\n";
    else if (sin == '-')
      cout << x << " - " << y << " = " << x - y << "\n";
    else if (sin == '*')
      cout << x << " * " << y << " = " << x + y << "\n";
    else if (sin == '/')
      cout << x << " / " << y << " = " << x / y << "\n";
    else
      cout << "Error: Enter operation\n";
    cout << "to continue enter 1 or not enter 0\n";
    cin >> loop;
  }
  return 0;
}