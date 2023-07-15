#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define sz(v) (v).size()
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
typedef long long ll;
int main()
{
  o_a;
  while (1)
  {
    int n = 0, i = 0, j = 0;
    cin >> n;
    int mat[n][n] = {0}, rowsum[n] = {0}, colsum[n] = {0}, r = 0, c = 0, row = 0, col = 0;
    if (n == 0)
      break;
    for (i = 0; i < n; i++)
      for (j = 0; j < n; j++)
        cin >> mat[i][j];
    for (i = 0; i < n; i++)
    {
      for (j = 0; j < n; j++)
        rowsum[i] += mat[i][j];
      if (rowsum[i] % 2 != 0)
      { 
        r++;
        row = i;
      }
    }
    for (j = 0; j < n; j++)
    {
      for (i = 0; i < n; i++)
        colsum[j] += mat[i][j];
      if (colsum[j] % 2 != 0)
      {
        c++;
        col = j;
      }
    }
    if (r == 0 && c == 0)
      cout << "OK" << endl;
    if (r == 1 && c == 1)
      cout << "Change bit (" << row + 1 << "," << col + 1 << ")" << endl;
    if (r > 1 || c > 1)
      cout << "Corrupt" << endl;
  }
  return 0;
}