// https://codeforces.com/contest/1722/submission/182555208
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
  int n;
  string s;
  cin >> n >> s;
  int val = 0;
  int n = sz(s);
  for (int i = 0; i < n; i++)
  {
    if (s[i] == 'L')
      val += i;
    else
      val += n - i - 1;
  }
  int l = 0, r = n - 1, idx = 0;
  while (l < n / 2 and r >= n / 2)
  {
    if (s[l] == 'L')
    {
      val -= l;
      val += n - l - 1;
      idx++;
    }
  }
}
