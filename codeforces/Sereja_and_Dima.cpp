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
  int n, b1 = 0, b2 = 0;
  cin >> n;
  int card[n];
  for (int i = 0; i < n; cin >> card[i], i++)
    ;
  int s = 0, e = (n - 1);
  for (int i = 0; i < n; i++)
  {
    if ((i + 1) % 2 != 0)
    {
      if (card[s] > card[e])
      {
        b1 += card[s];
        s++;
      }
      else
      {
        b1 += card[e];
        e--;
      }
    }
    else
    {
      if (card[s] > card[e])
      {
        b2 += card[s];
        s++;
      }
      else
      {
        b2 += card[e];
        e--;
      }
    }
  }
  cout << b1 << " " << b2;
}
