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

vector<vector<int>> no_of_n_colourful_numbers_till(1e6 + 1, vector<int>(10 + 1, 0));

void precompute_prime_factors()
{
  vector<int> no_of_distinct_prime_factors(1e6 + 1, 0);

  for (int i = 2; i <= 1e6; i++)
  {
    if (no_of_distinct_prime_factors[i] == 0)
    {
      for (int j = i; j <= 1e6; j += i)
      {
        no_of_distinct_prime_factors[j]++;
      }
    }
  }

  for (int i = 1; i <= 1e6; i++)
  {
    for (int j = 1; j <= 10; j++)
    {
      no_of_n_colourful_numbers_till[i][j] = no_of_n_colourful_numbers_till[i - 1][j];
    }
    no_of_n_colourful_numbers_till[i][no_of_distinct_prime_factors[i]]++;
  }
}

void solve()
{
  int a, b, left, right, n;
  scanf("%d %d %d", &a, &b, &n);
  left = min(a, b);
  right = max(a, b);

  printf("%d\n", no_of_n_colourful_numbers_till[right][n] - no_of_n_colourful_numbers_till[left - 1][n]);
}

int main()
{
  o_a;
  precompute_prime_factors();
  whilet
  {
    solve();
  }
}
