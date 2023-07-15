#include <iostream>
#include <string>
using namespace std;
int main()
{
  string a;
  int b, x;
  cin >> a >> b;
  for (int i = 0; i < a.length(); i++)
  {
    if (a[i] == 'a' || a[i] == 'o' || a[i] == 'e' || a[i] == 'i' || a[i] == 'u')
      x++;
  }
  if (x == 0)
    cout << "Not found!";
  // else if (x >= b)
  // {
  //   for (int i = 0; i < b; i++)
  //     cout << a[i];
  // }
  else if (x > 0 )
  {
    x = 0;
    for (int i = 0; i < a.length(); i++)
    {
      if (a[i] == 'a' || a[i] == 'o' || a[i] == 'e' || a[i] == 'i' || a[i] == 'u')
      {
        x = x + i;
      }
    }
    cout << x << "\n";
    for (int i = (x % b - 1); i <= a.length(); i++)
    {
      cout << a[i];
    }
  }
  return 0;
}