#include <iostream>
using namespace std;
int main()
{
  int x, y;
  char a;
  cout << "Enter the mathematical relationship \n";
  cin >> x >> a >> y;
  if ((x > y && a == '>') || (x < y && a == '<') || (x = y && a == '='))
    cout << "Right\n";
  else
    cout << "wrong\n";
  return 0;
}