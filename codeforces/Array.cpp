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
int main()
{
  o_a;
  int n;
  cin >> n;
  vec(int) P, N;
  int Z = 0;
  lp(i, 0, n, 1)
  {
    int x;
    cin >> x;
    if (x == 0)
      Z++;
    else if (x > 0)
      P.pb(x);
    else
      N.pb(x);
  }
  cout << 1 << " " << N[0] << endl;
  if (P.size() == 0)
    cout << 2 << " " << N[1] << " " << N[2] << endl;
  else
    cout << 1 << " " << P[0] << endl;
  if (P.size() == 0)
    cout << N.size() - 3 + Z << " ";
  else
    cout << N.size() + P.size() - 2 + Z << " ";
  if (sz(P) != 0)
    lp(i, 1, P.size(), 1) cout << P[i] << " ";
  if (P.size() == 0)
    lp(i, 3, N.size(), 1) cout << N[i] << " ";
  else
    lp(i, 1, N.size(), 1) cout << N[i] << " ";
  lp(i, 0, Z, 1) cout << 0 << " ";
}
