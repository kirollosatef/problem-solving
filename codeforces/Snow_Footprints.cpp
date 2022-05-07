#include <bits/stdc++.h>
#define pb push_back
#define v(x) vector<x>
#define sz(v) (int)(v).size()
#define all(str) str.begin(), str.end()
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;
typedef long long ll;
int main()
{
  o_a;
  int n, f, l;
  string str;
  cin >> n >> str;
  for (int i = 0; i < n; i++)
    if (str[i] != '.')
      f = i;
  for (int i = n - 1; i >= 0; i--)
    if (str[i] != '.')
      l = i;
}