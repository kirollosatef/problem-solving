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
  ll n;
  cin >> n;
  cout << n / 4 << " ";
  if (((n / 4) % 2) == 0)
    cout << n % 4;
  else
    cout << 3 - (n % 4);
}
