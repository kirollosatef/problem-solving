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
int a[55];
int main()
{
  o_a;
  int n, q;
  cin >> n >> q;
  for (int i = 1; i <= n; i++)
  {
    int k;
    cin >> k;
    if (!a[k])
      a[k] = i;
  }
  while (q--)
  {
    int t;
    cin >> t;
    cout << a[t] << " ";
    for (int i = 1; i <= 55; i++)
      if (a[i] && a[i] < a[t])
        a[i]++;
    a[t] = 1;
  }
  return 0;
}
