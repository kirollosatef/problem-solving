#include <bits/stdc++.h>
#define v(type) vector<type>
#define sz(x) (int)(x).size()
#define all(x) x.begin(), x.end()
#define read(file) ifstream cin(file)
#define fill(x, i) memset(x, i, sizeof(x))
#define lp(s, n, i) for (int i = s; i < n; i++)
#define lpe(s, n, i) for (int i = s; i <= n; i++)
#define rlp(s, n, i) for (int i = s; i >= n; i--)
#define cinarr(n, arr) for (int i = 0; i < n; cin >> arr[i], i++)
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define mp make_pair
#define endl "\n"
#define ins insert
#define F first
#define S second
#define whilet \
  int t;       \
  cin >> t;    \
  while (t--)
using namespace std;
typedef long long ll;
int main()
{
  o_a;
  whilet
  {
    ll n;
    cin >> n;
    ll arr[n];
    cinarr(n, arr);
    ll mx1 = 0, mx2 = 0;
    for (int i = 0; i < n; i++)
    {
      if (arr[i] > mx1)
      {
        mx2 = mx1;
        mx1 = arr[i];
      }
      else if (arr[i] > mx2)
        mx2 = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
      if (arr[i] != mx1)
        cout << arr[i] - mx1 << " ";
      else
        cout << arr[i] - mx2 << " ";
    }
    cout << endl;
  }
}
