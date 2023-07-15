#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;
typedef long long ll;
ll n, m, t, a, d;
ll gcd(ll a, ll b)
{
  if (a == 0)
    return b;
  return gcd(b % a, a);
}
ll lcm(ll a, ll b) //?https://www.khanacademy.org/math/cc-sixth-grade-math/cc-6th-factors-and-multiples/cc-6th-lcm/a/least-common-multiple-review
{
  return (a * b) / gcd(a, b);
}
int ar[4];
ll go(int id, int cnt, ll me, ll upto)
{
  if (id == 5)
  {
    if (cnt % 2)
      return -me / upto;
    else
      return me / upto;
  }
  ll ret = 0;
  ret += go(id + 1, cnt + 1, me, lcm(upto, ar[id]));
  ret += go(id + 1, cnt, me, upto);
  return ret;
}
int main()
{
  cin >> t;
  while (t--)
  {
    cin >> n >> m >> a >> d;
    ar[0] = a;
    ar[1] = a + d;
    ar[2] = a + 2 * d;
    ar[3] = a + 3 * d;
    ar[4] = a + 4 * d;
    cout << go(0, 0, m, 1) - go(0, 0, n - 1, 1) << endl;
  }
  return 0;
}
