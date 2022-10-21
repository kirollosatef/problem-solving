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
  int t;
  cin >> t;
  while (t--)
  {
    int n, ans = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    int l = 0;
    int r = n - 1;
    while (r > 0 && l < n - 1 && r > l)
    {
      if (arr[r] == 0)
      {
        if (arr[l] == 1)
        {
          ans++;
          r--;
          l++;
        }
        else
        {
          l++;
        }
      }
      else
        r--;
    }
    cout << ans << endl;
  }
}
