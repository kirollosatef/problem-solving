// https://codeforces.com/contest/63/problem/A
#include <bits/stdc++.h>
#define vec(type) vector<type>
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
  int n;
  cin >> n;
  vec(string) v1, v2, v3, v4;
  for (int i = 0; i < n; i++)
  {
    string x, y;
    cin >> x >> y;
    if (y == "rat")
      v1.pb(x);
    else if (y == "woman" || y == "child")
      v2.pb(x);
    else if (y == "man")
      v3.pb(x);
    else
      v4.pb(x);
  }
  for (int i = 0; i < v1.size(); i++)
    cout << v1[i] << endl;
  for (int i = 0; i < v2.size(); i++)
    cout << v2[i] << endl;
  for (int i = 0; i < v3.size(); i++)
    cout << v3[i] << endl;
  for (int i = 0; i < v4.size(); i++)
    cout << v4[i] << endl;
  return 0;
}
