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
int main()
{
  o_a;
  int t;
  cin >> t;
  while (t--)
  {
    string str;
    int a = 0, b = 0, c = 0;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
      if (str[i] == 'A')
        a++;
      else if (str[i] == 'B')
        b++;
      else
        c++;
    }
    b -= a;
    if (b < 0 || b != c)
    {
      cout << "NO" << endl;
      continue;
    }
    cout << "YES" << endl;
  }
}