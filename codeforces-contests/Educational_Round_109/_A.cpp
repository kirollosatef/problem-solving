#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  int ans[t];
  for (int tt = 0; tt < t; tt++)
  {
    int ep, wp;
    cin >> ep;
    wp = 100 - ep;
    if (wp == 0)
      ans[tt] = 1;
    else
    {
      for (int i = 100; i >= 2; i--)
      {
        if (ep % i == 0 && wp % i == 0)
        {
          ep = ep / i;
          wp = wp / i;
          break;
        }
      }
      ans[tt] = ep + wp;
    }
  }
  for (int tt = 0; tt < t; tt++)
    cout << ans[tt] << endl;
}