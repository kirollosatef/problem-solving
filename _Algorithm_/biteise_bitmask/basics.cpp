#include <bits/stdc++.h>
#define vec(type) vector<type>
#define sz(x) (int)(x).size()
#define all(x) x.begin(), x.end()
#define read(file) ifstream cin(file)
#define fill(x, i) memset(x, i, sizeof(x))
#define lp(s, n, i) for (int i = s; i < n; i++)
#define lpe(s, n, i) for (int i = s; i <= n; i++)
#define rlp(s, n, i) for (int i = s; i >= n; i--)
#define cinarr(n, arr) for (int i = 0; i < n; cin >> arr[i], i++)
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define mp make_pair
#define endl "\n"
#define ins insert
#define F first
#define S second
#define whilet \
  int t;       \
  cin >> t;    \
  while (t--)
using namespace std;
typedef long long ll;
/*
  => bitwise operations
  => bitset
  => bitset<8> b(5); // 00000101
  => b[0] = 1; // 00000111
  => b[1] = 0; // 00000110
  => b[2] = 1; // 00000111
  => b[3] = 1; // 00001111
  => b[4] = 0; // 00001101

  => b.count(); // 4
  => b.size(); // 8
  => b.any(); // true
  => b.none(); // false
  => b.all(); // false
  => b.set(); // 11111111
  => b.set(2, 0); // 11101111
  => b.reset(); // 00000000
  => b.reset(2); // 00000100
  => b.flip(); // 11111111
  => b.flip(2); // 11111011
  => b.to_ulong(); // 251
  => b.to_string(); // 11111011
  => b.to_ullong(); // 251
  => b.to_string(); // 11111011
 */
/*
    ---and---
    1 & 1 = 1
    1 & 0 = 0
    0 & 1 = 0
    0 & 0 = 0
    ---or----
    1 | 1 = 1
    1 | 0 = 1
    0 | 1 = 1
    0 | 0 = 0
    ---xor---
    1 ^ 1 = 0
    1 ^ 0 = 1
    0 ^ 1 = 1
    0 ^ 0 = 0
    ---not---
    ~1 = 0
    ~0 = 1
    ---left shift---
    5 << 1 = 10
    5 << 2 = 20
    5 << 3 = 40
    ---right shift---
    10 >> 1 = 5
    20 >> 2 = 5
    40 >> 3 = 5
 */
void count_one_degites()
{
  ll n;
  cin >> n;
  ll ans = 0;
  while (n != 0)
  {
    if ((n & 1))
      ans++;
    n >>= 1;
    cout << n << " ";
  }
  cout << " ans = " << ans << endl;
  cout << __builtin_popcount(n) << endl;
}
// (a ^ b = c) === (a ^ c = b) || (b ^ c = a)
// a == 5 , b == 6; => c = 3
// a = 0101
// b = 0110
// c = 0011
void XOR()
{
  int a = 5, b = 6, c = 3;
  cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
  cout << "(a ^ b) = " << (a ^ b) << endl;
  cout << "(a ^ c) = " << (a ^ c) << endl;
  cout << "(c ^ b) = " << (c ^ b) << endl;
}
void add_ane_to_zero()
{
  // 0010 == 2
  // 0110 == 4
  int a = 2;
  a |= (1 << 2);
  cout << a << endl;
}
// You are given integers AA and BB between 00 and 255255 (inclusive). Find a non-negative integer CC such that A \text{ xor }C=BA xor C=B.
void solve()
{
  int a, b;
  cin >> a >> b;
  cout << (a ^ b) << endl;
}
int main()
{
  o_a;
  // add_ane_to_zero();
  solve();
}
