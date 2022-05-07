//ker'o_a'tef
//O_A
#include <bits/stdc++.h>
using namespace std;
#define pd push_back
#define sz(v) (v).size()
typedef long long ll;
void faster()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
}
int frst[100000], last[100000];
int main()
{
  faster();
  ll n, l = 0, r = 0;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    int x;
    cin >> x;
    frst[x] = i;
    last[x] = n - i + 1;
  }
  int m;
  cin >> m;
  for (int i = 0; i < m; i++)
  {
    int x;
    cin >> x;
    l += frst[x];
    r += last[x];
  }
  cout << l << " " << r << endl;
}