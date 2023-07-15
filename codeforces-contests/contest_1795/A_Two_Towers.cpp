#include <bits/stdc++.h>
#define vec(type) vector<type>
#define sz(x) (int)(x).size()
#define all(x) x.begin(), x.end()
#define read(file) ifstream cin(file)
#define fill(x, i) memset(x, i, sizeof(x))
#define lp(i, srt, end, dir) \
  for (int i = srt; (dir ? (i < end) : (i > end)); (dir ? i++ : i--))
#define lpe(i, srt, end, dir) \
  for (int i = srt; (dir ? (i <= end) : (i >= end)); (dir ? i++ : i--))
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
bool isGd(string s)
{
  int n = sz(s);
  for (int i = 1; i < n; i++)
  {
    if (s[i] == s[i - 1])
      return false;
  }
  return true;
}
bool isGdLR(string s, int k)
{
  int n = sz(s);
  for (int i = k; i < n - 1; i++)
  {
    if (s[i] == s[i + 1])
      return false;
  }
  for (int i = 0; i < k - 2; i++)
  {
    if (s[i] == s[i + 1])
      return false;
  }
  return true;
}
int main()
{
  o_a;
  whilet
  {
    int n, m;
    string s, t;
    cin >> n >> m >> s >> t;
    reverse(all(t));
    s += t;
    int cnt = 0;
    for (int i = 0; i < s.size() - 1; i++)
      if (s[i] == s[i + 1])
        cnt++;
    cnt <= 1 ? YES : NO;
  }
}
