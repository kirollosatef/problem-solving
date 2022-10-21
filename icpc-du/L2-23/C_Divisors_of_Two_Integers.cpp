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
  multiset<int> s;
  int n;
  cin >> n;
  while (n--)
  {
    int x;
    cin >> x;
    s.insert(x);
  }
  int mx = *s.rbegin();
  for (int i = 1; i <= mx; i++)
    if (mx % i == 0)
      s.erase(s.find(i));
  int mx2 = *s.rbegin();
  cout << mx << " " << mx2;
}
