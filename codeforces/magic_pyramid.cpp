#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int x;
  string _ = " ", __ = "  ", s = "*";
  cin >> x;
  for (int i = 1; i <= x; i++)
  {
    if (i % 2 != 0)
    {
      for (int j = 1; j <= ((x / 2) - (i / 2)); j++)
        cout << __;
      for (int j = 1; j <= i; j++)
        cout << s << _;
    }
    else
    {
      for (int j = 1; j <= ((x / 2) - (i / 2)); j++)
        cout << __;
      for (int j = 1; j <= i; j++)
        cout << _ << s;
    }
    cout << endl;
  }
}