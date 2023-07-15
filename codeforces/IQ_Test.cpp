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
  int dot = 0, ha4 = 0, ok = 0;
  char ch[4][4];
  for (int i = 0; i < 4; i++)
    for (int j = 0; j < 4; j++)
      cin >> ch[i][j];
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      dot = (ch[i][j] == '.') + (ch[i][j + 1] == '.') + (ch[i + 1][j] == '.') + (ch[i + 1][j + 1] == '.');
      ha4 = (ch[i][j] == '#') + (ch[i][j + 1] == '#') + (ch[i + 1][j] == '#') + (ch[i + 1][j + 1] == '#');
      if (dot > 2 || ha4 > 2)
        ok = 1;
      if (ok)
        break;
      else
      {
        dot = 0;
        ha4 = 0;
      }
    }
    if (ok)
      break;
  }
  ok ? cout << "YES" : cout << "NO";
}