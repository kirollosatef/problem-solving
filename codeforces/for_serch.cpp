#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int x, a;
  cin >> x;
  int y[x];
  for (int i = 0; i < x; i++)
  {
    cin >> y[i];
  }
  for (int i = 0; i < x; i++)
  {
    if (y[i] != 0)
      for (int j = i + 1; j < x; j++)
      {
        if (y[i] == y[j])
        {
          a++;
          y[j] = 0;
          break;
        }
      }
  }
  cout << a << endl;
  return 0;
}