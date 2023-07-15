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
  whilet
  {
    int h1 = 0, h2 = 0;
    int n;
    cin >> n;
    int arr[n];
    cinarr(n, arr);
    int m1 = 0, m2 = 0;
    if (n % 2 == 0)
    {
      m1 = n / 2 - 1;
      m2 = n / 2;
    }
    else
    {
      m1 = n / 2;
      m2 = n / 2;
    }
    for (int i = 0; i < m1; i++)
    {
      if (arr[i] <= arr[i + 1])
        h1 = -1;
      else
      {
        h1 = 0;
        break;
      }
    }
    if (h1 == 0)
    {
      for (int i = 0; i < m1; i++)
      {
        if (arr[i] >= arr[i + 1])
          h1 = 1;
        else
        {
          h1 = 0;
          break;
        }
      }
    }
    for (int i = m2; i < n - 1; i++)
    {
      if (arr[i] <= arr[i + 1])
        h2 = -1;
      else
      {
        h2 = 0;
        break;
      }
    }
    if (h2 == 0)
    {
      for (int i = m2; i < n - 1; i++)
      {
        if (arr[i] >= arr[i + 1])
          h2 = 1;
        else
        {
          h2 = 0;
          break;
        }
      }
    }
    if (n == 1)
      YES;
    else if (h1 == 0 && h2 == 0)
      NO;
    else if (h1 == -1 && h2 == 1)
      NO;
    else
      YES;
  }
}
