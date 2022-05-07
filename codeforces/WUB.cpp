#include <iostream>
#include <string>
using namespace std;

int main()
{
  bool c = false;
  string x;
  cin >> x;
  for (int i = 0; i < x.size();)
  {
    if (x[i] == 'W' && x[i + 1] == 'U' && x[i + 2] == 'B')
    {
      i += 3;
      if (c == true)
      {
        cout << " ";
      }
      c = false;
    }
    else
    {
      cout << x[i];
      c = true;
      i++;
    }
  }
  return 0;
}