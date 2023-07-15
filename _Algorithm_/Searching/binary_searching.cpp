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
using namespace std;
typedef long long ll;

int binary_search(int arr[], int n, int f)
{
  int l = 0, r = n - 1;
  while (l <= r)
  {
    int mid = (l + r) / 2;
    if (arr[mid] == f)
      return mid;
    else if (arr[mid] > f)
      r = mid - 1;
    else
      l = mid + 1;
  }
  return -1;
}

int upper_powned(int arr[], int n, int t)
{
  int l = 0, r = n - 1;
  while (l <= r)
  {
    int mid = (l + r) / 2;
    if (arr[mid] <= t)
      l = mid + 1;
    else
      r = mid - 1;
  }
  return l;
}

int lower_powned(int arr[], int n, int t)
{
  int l = 0, r = n - 1;
  while (l <= r)
  {
    int mid = (l + r) / 2;
    if (arr[mid] >= t)
      r = mid - 1;
    else
      l = mid + 1;
  }
  return r;
}

//
void solve()
{
  double x;
  cin >> x;
  double s = 0.00000001, e = 1.00000000000;
}

int main()
{
  int n, f;
  cin >> n >> f;
  int arr[n];
  cinarr(n, arr);
  cout << binary_search(arr, n, f);
  return 0;
}
