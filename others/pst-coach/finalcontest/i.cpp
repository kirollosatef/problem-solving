#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define sz(v) (v).size()
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
typedef long long ll;
int main()
{
  o_a;
  int a1, a2, a3, a4;
  cin >> a1 >> a2 >> a3 >> a4;
  int ans = a1;
  if (ans > a2)
    ans = a2;
  if (ans > a3)
    ans = a3;
  if (ans > a4)
    ans = a4;
  cout << ans;
}