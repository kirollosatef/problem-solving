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
  for (int i = 0; i <= x.size(); i++)
  {
    if (x[i] == '0' && x[i + 1] == '0' && x[i + 2] == '0' && x[i + 3] == '0' && x[i + 4] == '0' && x[i + 5] == '0' && x[i + 6] == '0')
    {
      cout << "YES";
      return 0;
    }
    else if (x[i] == '1' && x[i + 1] == '1' && x[i + 2] == '1' && x[i + 3] == '1' && x[i + 4] == '1' && x[i + 5] == '1' && x[i + 6] == '1')
    {
      cout << "YES";
      return 0;
    }
  }
  cout << "NO";
  return 0;
}
