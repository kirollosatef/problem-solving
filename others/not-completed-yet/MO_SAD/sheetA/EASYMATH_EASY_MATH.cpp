#include <bits/stdc++.h>
using namespace std;
#define pd push_back
typedef long long ll;
void faster()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
}
ll gcd(ll a, ll b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
  return (a / gcd(a, b)) * b;
}
ll n, m, a, d;
int main()
{
  faster();
  cin >> n >> m;
  cout << gcd(n, m) << endl;
  cout << lcm(n, m);
}