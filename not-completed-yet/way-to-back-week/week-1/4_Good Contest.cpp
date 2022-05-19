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
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    string str;
    cin >> str;
    int B, A;
    cin >> B >> A;
    if (B >= 2400 && A > 2400 && A > B)
    {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
}