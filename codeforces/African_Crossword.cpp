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
int main()
{
  o_a;
  int a, b;
  cin >> a >> b;
  map<pair<int, char>, int> mp1, mp2;
  char ch[a][b];
  string ans = "";
  for (int i = 0; i < a; i++)
  {
    for (int j = 0; j < b; j++)
    {
      cin >> ch[i][j];
      pair<int, char> x, y;
      x.first = i;
      y.first = j;
      x.second = ch[i][j];
      y.second = ch[i][j];
      mp1[x]++;
      mp2[y]++;
    }
  }
  for (int i = 0; i < a; i++)
  {
    for (int j = 0; j < b; j++)
    {
      pair<int, char> t1, t2;
      t1.first = i;
      t1.second = ch[i][j];
      t2.first = j;
      t2.second = ch[i][j];
      // cout << mp1[t1] << " " << mp2[t2] << " " << ch[i][j] << " \n";
      if (mp1[t1] == mp2[t2] && mp1[t1] == 1)
        ans += ch[i][j];
    }
  }
  cout << ans;
}
