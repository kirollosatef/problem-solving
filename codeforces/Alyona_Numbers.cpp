#include <bits/stdc++.h>
#define pb push_back
#define sz(v) (v).size()
#define vi vector<int>
#define vs vector<string>
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;
typedef long long ll;
int main()
{
  o_a;
  ll n, m, a[5] = {0}, b[5] = {0};
  cin >> n >> m;
  for (int i = 1; i <= n; i++)
    a[i % 5]++;
  for (int i = 1; i <= m; i++)
    b[i % 5]++;
  cout << (a[0] * b[0] + a[1] * b[4] + a[2] * b[3] + a[3] * b[2] + a[4] * b[1]);
}