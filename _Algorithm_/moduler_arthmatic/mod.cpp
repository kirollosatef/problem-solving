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
int M, N = 20;
ll add(ll a, ll b)
{
  return ((a % M) + (b % M));
}
ll gcd(ll a, ll b)
{
  // gcd(a,b) = gc (b , a%b)
  // stpping when b = 0
}
ll fact[N], inv[N];
void preCompute()
{
}
int main()
{

  o_a;
  cout << (-8) % 3;
}
