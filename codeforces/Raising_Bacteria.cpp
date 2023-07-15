#include <iostream>
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
  int x;
  string _ = " ", __ = "  ", s = "*";
  // cin >> x;
  for (int i = 1; i <= 5; i++)
  {
    if (i % 2 != 0)
    {
      for (int j = 1; j <= ((5 / 2) - (i / 2)); j++)
        cout << __;
      for (int j = 1; j <= i; j++)
        cout << s << _;
    }
    else
    {
      for (int j = 1; j <= ((5 / 2) - (i / 2)); j++)
        cout << __;
      for (int j = 1; j <= i; j++)
        cout << _ << s;
    }
    cout << endl;
  }
  return 0; 
}