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
  read("collectingofficer.in");
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    string s;
    v(int) a, z;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == 'A')
        a.pb(i);
      else if (s[i] == 'Z')
        z.pb(i);
    }
    int mn = INT_MAX, index = 0;
    for (int i = a.size() - 1; i >= 0; i--)
    {
      if (a[i] < z[index] && (z[index] - a[i]) > 20)
        mn = min(mn, (z[index] - a[i]));
      else
      {
        index++;
        i++;
      }
    }
    cout << mn + 1 << endl;
  }
  return 0;
}
