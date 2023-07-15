#include <bits/stdc++.h>
#define v(type) vector<type>
#define sz(x) (int)(x).size()
#define all(x) x.begin(), x.end()
#define read(file) ifstream cin(file)
#define fill(x, i) memset(x, i, sizeof(x))
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;
#define pb push_back
typedef long long ll;
int main()
{
  o_a;
  int n, m;
  cin >> n >> m;
  if (((m / n) + 1) < n)
    cout << m;
  else
    cout << m % (int)(pow(2, n));
}
