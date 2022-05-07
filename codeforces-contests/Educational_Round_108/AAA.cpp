#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int cas;
  cin >> cas;
  string ans[cas];
  for (int i = 0; i < cas; i++)
  {
    int r, b, k;
    cin >> r >> b >> k;
    for (int j = 0; j < 1;)
    {
      int o = abs(r - b);
      if (r == b && k == 0)
      {
        ans[i] = "YES";
        j++;
      }
      else if (abs(r - b) <= k)
      {
        ans[i] = "YES";
        j++;
      }
      else if ((r == 0 || b == 0) && abs(r - b) > k)
      {
        ans[i] = "NO";
        j++;
      }
      else
      {
        if (r > k)
          r = r - (r % k);
        if (r <= k)
          r--;
        if (b > k)
          b = b - (b % k);
        if (b <= k)
          b--;
      }
    }
  }
  for (int i = 0; i < cas; i++)
  {
    cout << ans[i] << endl;
  }
}