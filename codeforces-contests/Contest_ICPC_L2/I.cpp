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

vec(vec(int)) alll(1e6 + 1, vec(int)(10 + 1, 0));

void distinctPrimeFactors()
{
  vec(int) t(1e6 + 1, 0);
  for (int i = 2; i <= 1e6; i++)
  {
    if (t[i] == 0)
    {
      for (int j = i; j <= 1e6; j += i)
      {
        t[j]++;
      }
    }
  }
  for (int i = 1; i <= 1e6; i++)
  {
    for (int j = 1; j <= 10; j++)
    {
      alll[i][j] = alll[i - 1][j];
    }
    alll[i][t[i]]++;
  }
}
int main()
{
  o_a;
  distinctPrimeFactors();
  whilet
  {
    int a, b, n;
    cin >> a >> b >> n;
    if (a == 1 && n == 0)
      cout << alll[b][n] + 1 << endl;
    else
      cout << alll[b][n] - alll[a - 1][n] << endl;
  }
}
