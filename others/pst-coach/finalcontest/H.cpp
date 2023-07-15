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
  ll n, sum = 0;
  ll x = 0;
  string str;
  cin >> str >> n;
  for (int i = 0; i < sz(str); i++)
    x += (str[i] - '0');
  x *= n;
  while (x >= 10)
  {
    while (x > 0)
    {
      sum += x % 10;
      x -= x % 10;
      x /= 10;
    }
    x = sum;
    sum = 0;
  }
  cout << x;
}