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
bool is(ll n)
{
  if (n <= 1)
    return false;
  if (n <= 3)
    return true;
  if (n % 2 == 0 || n % 3 == 0)
    return false;
  for (ll i = 5; i * i <= n; i = i + 6)
    if (n % i == 0 || n % (i + 2) == 0)
      return false;
  return true;
}
// bottom-up approach
ll bottom[10000];
ll fib_approach(ll x)
{
  if (x == 0 || x == 1)
    return x;
  bottom[0] = 0;
  bottom[1] = 1;
  for (int i = 2; i <= x; i++)
    bottom[i] = bottom[i - 1] + bottom[i - 2];
  return bottom[x];
}
int main()
{
  o_a;
  ll t;
  cin >> t;
  while (t--)
  {
    ll x;
    cin >> x;
    x--;
    if (is(fib_approach(x)))
      cout << "prime" << endl;
    else
      cout << "not prime" << endl;
  }
}
// ll memo[10000] = {0};
// ll fib(ll x) // 0 1 1 2 3 5 8
// {
//   if (memo[x] != 0)
//     return memo[x];
//   if (x == 0 || x == 1)
//     return x;
//   else
//   {
//     int result = ((fib(x - 1) + fib(x - 2)));
//     memo[x] = result;
//     return result;
//   }
// }