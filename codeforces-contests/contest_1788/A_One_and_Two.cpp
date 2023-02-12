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
    int n, cnt = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
      if (v[i] == 2)
        cnt++;
    }
    if (cnt % 2)
      cout << -1 << endl;
    else
    {
      int cnt2 = 0;
      for (int i = 0; i < n; i++)
      {
        if (v[i] == 2)
          cnt2++;
        if (cnt2 == cnt / 2)
        {
          cout << i + 1 << endl;
          break;
        }
      }
    }
  }
}
// whilet
// {
//   int n;
//   cin >> n;
//   vector<int> v(n);
//   cinarr(n, v);
//   int l = 1, r = 1, k = -1;
//   for (int i = 0; i < n - 1; i++)
//   {
//     l *= v[i];
//     for (int j = i + 1; j < n; j++)
//     {
//       r *= v[j];
//       if (l == r)
//       {
//         k = i;
//         break;
//       }
//     }
//     if (k != -1)
//     {
//       break;
//     }
//     r = 1;
//   }
//   if (k == -1)
//     cout << -1 << endl;
//   else
//     cout << k + 1 << endl;
// }
