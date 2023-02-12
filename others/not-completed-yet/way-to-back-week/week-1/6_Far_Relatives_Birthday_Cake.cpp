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
  int n;
  cin >> n;
  char arr[n][n];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> arr[i][j];
    }
  }
  int countx = 0, county = 0;
  for (int i = 0; i < n; i++)
  {
    int x = 0, y = 0, xx = 0, yy = 0;
    for (int j = 0; j < n; j++)
    {
      if (arr[i][j] == 'C')
        x++;
      if (arr[j][i] == 'C')
        y++;
    }
    if (x >= 2)
    {
      for (int j = 0; j < x; j++)
        xx += j;
      countx += xx;
    }
    if (y >= 2)
    {
      for (int j = 0; j < y; j++)
        yy += j;
      county += yy;
    }
  }
  cout << countx + county;
}