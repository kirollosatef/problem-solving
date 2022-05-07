#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  int ans[t];
  for (int i = 0; i < t; i++)
  {
    long long n, r, y = 0;
    cin >> n;
    if (n % 2050 != 0)
      ans[i] = -1;
    else
    {
      r = n / 2050;
      for (int j = 0; j < 1;)
      {
        if (r != 0)
        {
          y += r % 10;
          r /= 10;
        }
        else
          j++;
      }
      ans[i] = y;
    }
  }
  for (int i = 0; i < t; i++)
  {
    cout << ans[i] << endl;
  }
  return 0;
}
