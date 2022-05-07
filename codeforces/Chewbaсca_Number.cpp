#include <bits/stdc++.h>
#define pb push_back
#define sz(v) (v).size()
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
  string x;
  cin >> x;
  for (ll i = 0; i < sz(x); i++)
  {
    if (i == 0 && x[i] == '9')
    {
      continue;
    }
    if (x[i] - '0' > 4)
    {
      int xx = 9 - (x[i] - '0');
      x[i] = xx + '0';
    }
  }
  cout << x;
}