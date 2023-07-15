#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    long long n;
    long long out = 2;
    cin >> n;
    long long i = n;
    if (n % 2 == 0)
    {
      while (i > 0)
      {
        cout << out << " " << out - 1 << " ";
        out += 2;
        i -= 2;
      }
    }
    else
    {
      while (i > 3)
      {
        cout << out << " " << out - 1 << " ";
        out += 2;
        i -= 2;
      }
      cout << n << " " << n - 2 << " " << n - 1;
    }
    cout << endl;
  }
}