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
  ifstream cin("adam.in");
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] == 'U')
      {
        count++;
      }
      else
      {
        cout << count << endl;
        break;
      }
    }
    if (count == s.size())
    {
      cout << count << endl;
    }
  }
  cin.close();
  return 0;
}