#include <bits/stdc++.h>
using namespace std;
#define pd push_back
#define sz(v) (v).size()
typedef long long ll;
void faster()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
}
int main()
{
  faster();
  int n, m, chips = 1;
  cin >> n >> m;
  n++;
  while (1)
  {
    if (m - chips < 0)
    {
      cout << m;
      break;
    }
    else
    {
      m -= chips;
      chips++;
      chips %= n;
    }
  }
  return 0;
}