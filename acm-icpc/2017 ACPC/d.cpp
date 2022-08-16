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
  int arr[n];
  bool use[n] = {0};
  for (int i = 0; i < n; cin >> arr[i], i++)
    ;
  for (int i = n - 1; i >= 0; i--)
  {
    int mx = 0, x = 0, y = 0;
    for (int j = i - 1; j >= 0; j--)
    {
      mx = max(mx, __gcd(arr[j], arr[i]));
    }
    for (int j = i + 1; j < n; j++)
    {
      mx = max(mx, __gcd(arr[j], arr[i]));
    }
    ans += mx;
  }
  cout << ans;
}
