#include <bits/stdc++.h>
#define pb push_back
#define sz(v) (v).size()
#define all(str) str.begin(), str.end()
#define vi vector<int>
#define vs vector<string>
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;
typedef long long ll;
int main()
{
  o_a;
  int t;
  cin >> t;
  while (t--)
  {
    string n;
    int ok = 0;
    cin >> n;
    if ((n[sz(n) - 1] - '0') % 2 == 0)
      cout << 0 << endl;
    else if ((n[0] - '0') % 2 == 0)
      cout << 1 << endl;
    else
    {
      for (int i = 0; i < sz(n); i++)
        if ((n[i] - '0') % 2 == 0)
        {
          ok = 1;
          break;
        }
      (ok) ? cout << 2 << endl : cout << -1 << endl;
    }
  }
}