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
void Sieve(int n)
{
  // Create a boolean array "prime[0..n]" and initialize
  // all entries it as true. A value in prime[i] will
  // finally be false if i is Not a prime, else true.
  bool prime[n + 1];
  fill(prime, true);
  for (int i = 0; i * i <= n; i++)
  {
    // If prime[p] is not changed, then it is a prime
    if (prime[i] == true)
    {
      // Update all multiples of p greater than or
      // equal to the square of it numbers which are
      // multiple of p and are less than p^2 are
      // already been marked.
      for (int j = i * i; j <= n; j += i)
        prime[i] = 0;
    }
  }
}
int main()
{
  o_a;
  int n;
  cin >> n;
}
