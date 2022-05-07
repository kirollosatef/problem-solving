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
  int n, m, temp = 0;
  cin >> n >> m;
  string all = "", l = "", r = "";
  for (int i = 0; i < m; i++)
  {
    all += '#';
    l += '.';
    r += '.';
  }
  l[0] = '#';
  r[m - 1] = '#';
  for (int i = 0; i < n; i++)
  {
    if (i == 0 || i == n - 1 || i % 2 == 0)
      cout << all << endl;
    else
    {
      if (!temp)
      {
        cout << r << endl;
        temp = 1;
      }
      else
      {
        cout << l << endl;
        temp = 0;
      }
    }
  }
}