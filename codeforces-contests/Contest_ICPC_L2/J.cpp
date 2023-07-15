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
int count_numbers(int A[], int N)
{
  int count = 0;
  for (int i = 0; i < N; i++)
  {
    bool has_property = true;
    for (int j = 0; j < N; j++)
    {
      if (i != j && A[i] % A[j] == 0)
      {
        has_property = false;
        break;
      }
    }
    if (has_property)
    {
      count++;
    }
  }
  return count;
}
int main()
{
  o_a;
  int N;
  cin >> N;
  int A[N];
  cinarr(N, A);
  cout << count_numbers(A, N) << endl;
  return 0;
}
