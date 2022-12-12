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
bool rec1(string a, string b)
{
  int i = 0;
  while (i < a.size())
  {
    if (a[i] < b[i])
    {
      a.erase(a.begin() + i);
      b.erase(b.begin() + i);
      return rec1(a, b);
    }
    i++;
  }
  if (a.size() == 0)
    return true;
  return false;
}
bool rec2(string a, string b)
{
  int i = 0;
  while (i < a.size())
  {
    if (a[i] > b[i])
    {
      a.erase(a.begin() + i);
      b.erase(b.begin() + i);
      return rec2(a, b);
    }
    i++;
  }
  if (a.size() == 0)
    return true;
  return false;
}
int main()
{
  o_a;
  int n;
  string s;
  cin >> n >> s;
  string s1 = s.substr(0, n);
  string s2 = s.substr(n, n);
  sort(all(s1));
  sort(all(s2));
  (rec1(s1, s2) || rec2(s1, s2)) ? YES : NO;
}
