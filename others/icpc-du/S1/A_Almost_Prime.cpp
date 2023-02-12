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
  int n, ans = 0;
  cin >> n;
  int arr[n + 1] = {0};
  for (int i = 2; i <= n; i++)
  {
    if (!arr[i])
    {
      for (int j = i + 1; j <= n; j++)
        if (j % i == 0)
          arr[j]++;
    }
  }
  for (int i = 0; i <= n; i++)
    if (arr[i] == 2)
      ans++;
  cout << ans;
}
