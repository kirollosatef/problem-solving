//sheet_1
//4 => simple caculator
#include <iostream>
using namespace std;
int main()
{
  int x, y;
  char z;
  cout << "Enter your calculation\n";
  cin >> x >> z >> y;
  if (z == '+')
    cout << x << " + " << y << " = " << x + y;
  else if (z == '-')
  cout << x << " - " << y << " = " << x - y;
  else if (z == '*')
  cout << x << " * " << y << " = " << x * y;
  else if (z == '/')
  cout << x << " / " << y << " = " << x / y;
}