#include <bits/stdc++.h>
#define pb push_back
#define v(x) vector<x>
#define sz(v) (int)(v).size()
#define all(str) str.begin(), str.end()
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;
typedef long long ll;
void sortString(string &str, int &ans)
{
  for (int i = 0; i < sz(str); i++)
  {
    for (int j = i + 1; j < sz(str); j++)
    {
      if (str[j] < str[i])
      {
        swap(str[i], str[j]);
        ans++;
      }
    }
  }
}
int main()
{
  o_a;
  ifstream cin("abc.in");
  int n;
  cin >> n;
  string str;
  cin >> str;
  int ans = 0;
  sortString(str, ans);
  if (ans == 0)
  {
    cout << -1;
    return 0;
  }
  cout << ans;
}
