#include <iostream>
using namespace std;
int main()
{
  int x;
  cin >> x;
  for (int i = 0; i < x; i++)
  {
    int y;
    cin >> y;
    int c[y];
    int s[y];
    int ss[y];
    int g = 0;
    int h = 0;
    for (int u = 0; u < y; u++)
    {
      cin >> c[u];
      if (c[u] % 2 == 0)
      {
        s[g] = c[u];
        g++;
      }
      if (c[u] % 2 == 1)
      {
        ss[h] = c[u];
        h++;
      }
    }
    for (int k = 0; k < g; k++)
    {
      cout << s[k] << " ";
    }
    for (int k = 0; k < h; k++)
    {
      cout << ss[k] << " ";
    }
  }
  return 0;
}