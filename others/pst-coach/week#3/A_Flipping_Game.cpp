#include <iostream>
using namespace std;
int main()
{
  int n, o = 0, z = 0, tmp = -1;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    if (x)
    {
      o++;
      if (z > 0)
        z--;
    }
    else
    {
      z++;
      if (z > tmp)
        tmp = z;
    }
  }
  cout << o + tmp;
}
