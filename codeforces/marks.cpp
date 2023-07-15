#include <bits/stdc++.h>
#define v(type) vector<type>
#define sz(x) (int)(x).size()
#define all(x) x.begin(), x.end()
#define read(file) ifstream cin(file)
#define fill(x, i) memset(x, i, sizeof(x))
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;
#define pb push_back
typedef long long ll;
int main()
{
  o_a;
  int n, m, ans = 0;
  cin >> n >> m;
  int arr[n] = {0};
  char marks[n][m];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> marks[i][j];
  for (int i = 0; i < m; i++)
  {
    int mx = 0, index = -1, eq = 0;
    for (int j = 0; j < n; j++)
    {
      if (marks[i][j] - '0' > mx)
      {
        mx = marks[i][j] - '0';
        index = j;
      }
      else if (marks[i][j] - '0' == mx)
        eq++;
    }
    if (eq == n - 1)
    {
      cout << n;
      return 0;
    }
    if (index != -1)
      arr[index]++;
  }
  for (int i = 0; i < n; i++)
    if (arr[i] > 0)
      ans++;
  cout << ans;
  return 0;
}
