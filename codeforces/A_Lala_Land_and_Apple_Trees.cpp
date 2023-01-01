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
  ll n;
  cin >> n;
  ll sP = 0, sN = 0, ans = 0;
  vector<pair<ll, ll>> v(n);
  lp(i, 0, n, 1)
  {
    cin >> v[i].F >> v[i].S;
    v[i].F > 0 ? sP++ : sN++;
    ans += v[i].S;
  }
  sort(all(v));
  if (sP == sN)
    cout << ans << endl;
  else if (sN > sP)
  {
    ans = 0;
    lp(i, (sN - sP - 1), n, 1)
        ans += v[i].S;
    cout << ans << endl;
  }
  else
  {
    ans = 0;
    lp(i, 0, (n - (sP - sN - 1)), 1) ans += v[i].S;
    cout << ans << endl;
  }
}
// void sortByFirst(vector<pair<int, int>> &arr)
// {
//   int n = arr.size();
//   lp(i, 0, n, 1) lp(j, i + 1, n, 1) if (arr[i].F > arr[j].F) swap(arr[i], arr[j]);
// }
// int n;
// cin >> n;
// vector<pair<int, int>> arr(n);
// lp(i, 0, n, 1) cin >> arr[i].F >> arr[i].S;
// for (auto i : arr)
//   cout << i.F << " " << i.S << endl;
// sortByFirst(arr);
// vector<pair<int, int>> P;
// vector<pair<int, int>> N;
// for (auto i : arr)
//   (i.F < 0) ? N.pb(i) : P.pb(i);
// ll sumN = 0, sumP = 0;
// ll ans = 0;
// for (auto i : P)
//   sumP += i.S;
// for (auto i : N)
//   sumN += i.S;
// int ok = (sumP > sumN);
// cout << P.size() << endl;
// cout << N.size() << endl;
// int iP = 0, iN = N.size() - 1;
// if (P.size() == 0)
// {
//   ans = N[iN].S;
//   cout << ans;
// }
// else if (P.size() == 0)
// {
//   ans = P[0].S;
//   cout << ans;
// }
// else
// {
//   while (iP < P.size() || iN >= 0)
//   {
//     if (ok)
//     {
//       ans += P[iP].S;
//       iP++;
//     }
//     else
//     {
//       ans += N[iN].S;
//       iN--;
//     }
//     ok ? ok = 0 : ok = 1;
//   }
// }
// cout << ans;
