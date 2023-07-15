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
string reverse(string x)
{
  for (int i = 0; i < sz(x) / 2; i++)
    swap(x[i], x[sz(x) - i - 1]);
  return x;
}
int main()
{
  o_a;
  string x, y , s;
  cin >> x >> s;
  y = reverse(x);
  (s == y) ? cout << "YES" : cout << "NO";
}