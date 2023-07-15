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
char ch[400][400];
int main()
{
  o_a;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin >> ch[i][j];
  bool ok = (ch[0][0] != ch[0][1]);
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      if (i == j || i + j == n - 1)
        (ch[i][j] == ch[0][0]) ? ok : ok = 0;
      else
        (ch[i][j] == ch[0][1]) ? ok : ok = 0;
  ok ? cout << "YES\n" : cout << "NO\n";
}