#include <bits/stdc++.h>
#define pb push_back
#define sz(v) (v).size()
#define all(str) str.begin(), str.end()
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
  int k, n, w;
  cin >> k >> n >> w;
  int all = k * ((w * (w + 1)) / 2);
  if (all > n)
    cout << all - n;
  else
    cout << 0;
}