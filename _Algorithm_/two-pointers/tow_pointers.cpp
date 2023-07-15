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
// pointer : is a reference to  an opject
// use tow pointer when you need to analyze each element  of the collection compared to its other element
int main()
{
  o_a;
  // find the first and last index of a target number in a sorted array
  ll n, target;
  cin >> n >> target;
  v(ll) arr(n);
  cinarr(n, arr);
  int l = 0, r = n - 1;
  while (l < r)
  {
    if (arr[l] + arr[r] == target)
    {
      cout << "found at: " << l << " " << r << endl;
      break;
    }
    else if ((arr[l] + arr[r]) > target)
      r--;
    else
      l++;
  }
}
