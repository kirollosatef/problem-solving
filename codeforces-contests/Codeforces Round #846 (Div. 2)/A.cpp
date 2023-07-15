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
  whilet
  {
    int n;
    cin >> n;
    vector<int> a(n);
    cinarr(n, a);
    vector<int> odd = {}, even = {};
    for (int i = 0; i < n; i++)
    {
      if (a[i] % 2 == 0)
        even.pb(i + 1);
      else
        odd.pb(i + 1);
    }
    if (sz(odd) >= 3)
    {
      YES;
      for (int i = 0; i < 3; i++)
        cout << odd[i] << " ";
      cout << endl;
    }
    else
    {
      if (sz(odd) && sz(even) >= 2)
      {
        YES;
        cout << odd[0] << " " << even[1] << " " << even[0] << endl;
      }
      else
      {
        NO;
      }
    }
  }
}
