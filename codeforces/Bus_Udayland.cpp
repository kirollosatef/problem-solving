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
  int n, ok = 0, indx = 0, x = 0, y = 0;
  cin >> n;
  string str[n];
  for (int i = 0; i < n; i++)
  {
    cin >> str[i];
    if (!ok)
    {
      if (str[i][0] == 'O' && str[i][1] == 'O')
        ok = 1, indx = i, x = 0, y = 1;
      else if (str[i][3] == 'O' && str[i][4] == 'O')
        ok = 1, indx = i, x = 3, y = 4;
    }
  }
  if (ok)
  {
    str[indx][x] = '+', str[indx][y] = '+';
    cout << "YES" << endl;
    for (int i = 0; i < n; i++)
      cout << str[i] << endl;
  }
  else
    cout << "NO" << endl;
}