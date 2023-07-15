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
int main()
{
  o_a;
  int n;
  cin >> n;
  int a = n % 10, b = n / 10;
  if (a % b == 0)
    cout << "YES";
  else if (b % a == 0)
    cout << "YES";
  else
    cout << "NO";
}
