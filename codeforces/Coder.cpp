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
  int n;
  cin >> n;
  cout << (int)(((n * n) + 1) / 2) << endl;
  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0)
    {
      for (int j = 0; j < n; j++)
      {
        if (j % 2 == 0)
          cout << "C";
        else
          cout << ".";
      }
      cout << endl;
    }
    else
    {
      for (int j = 0; j < n; j++)
      {
        if (j % 2 == 0)
          cout << ".";
        else
          cout << "C";
      }
      cout << endl;
    }
  }
}
