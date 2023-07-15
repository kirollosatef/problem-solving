#include <iostream>
using namespace std;
int main()
{
  int A = 0, a = 0;
  string x;
  cin >> x;
  for (int i = 0; i < x.size(); i++)
  {
    if (x[i] >= 'a' && x[i] <= 'z')
      a++;
    else
      A++;
  }
  if (a >= A)
  {
    for (int i = 0; i < x.size(); i++)
    {
      if (x[i] >= 'A' && x[i] <= 'Z')
      {
        x[i] += 32;
        cout << x[i];
      }
      else
        cout << x[i];
    }
  }
  else
  {
    for (int i = 0; i < x.size(); i++)
    {
      if (x[i] >= 'a' && x[i] <= 'z')
      {
        x[i] -= 32;
        cout << x[i];
      }
      else
        cout << x[i];
    }
  }
}