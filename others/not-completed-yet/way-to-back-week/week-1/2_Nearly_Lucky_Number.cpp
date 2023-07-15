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
  string x;
  cin >> x;
  int nn = 0;
  for (int i = 0; i < sz(x); i++)
    if (x[i] == '4' || x[i] == '7')
      nn++;
  if (nn == 4 || nn == 7)
    cout << "YES";
  else
    cout << "NO";
}