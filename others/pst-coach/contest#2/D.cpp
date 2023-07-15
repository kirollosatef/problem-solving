#include <bits/stdc++.h>
using namespace std;
#define pd push_back
#define sz(v) (v).size()
typedef long long ll;
void faster()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
}
int main()
{
  faster();
  int n, k, mx;
  cin >> n >> k;
  mx = n * (n / 2);
  if (n % 2)
    mx += n / 2 + 1;
  if (k > mx)
  {
    cout << "NO" << endl;
    return 0;
  }
  else
  {
    cout << "YES" << endl;
    for (int i = 0; i < n; i++)
    {
      if (!(i % 2))
      {
        for (int j = 0; j < n; j++)
        {
          if (!(j % 2) && k > 0)
          {
            cout << "L";
            k--;
          }
          else
            cout << "S";
        }
        cout << endl;
      }
      else
      {
        for (int j = 0; j < n; j++)
        {
          if (j % 2 && k > 0)
          {
            cout << "L";
            k--;
          }
          else
            cout << "S";
        }
        cout << endl;
      }
    }
  }
}