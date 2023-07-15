/**
 * By:kero_atef
 * Date:2022/06/25-15:55
 * https://codeforces.com/contest/361/problem/A
 */
#include <bits/stdc++.h>
#define pb push_back
#define v(x) vector<x>
#define sz(v) (int)(v).size()
#define all(str) str.begin(), str.end()
#define fill(arr, x) memset(arr, x, sizeof(arr))
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;
typedef long long ll;
int main()
{
  o_a;
  int n, k;
  cin >> n >> k;
  int ans[n][n];
  fill(ans, 0);
  for (int i = 0; i < n; i++)
  {
    for (int j = i;;)
    {
      ans[i][j] = k;
      break;
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}