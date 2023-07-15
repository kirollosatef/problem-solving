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
  for (int i = 1; i <= n / 2; i++)
  {
    if(i)
    for (int j = 1; j <= n; j++)
      cout << "*";
    cout << endl;
  }
  for (int i = 1; i <= n; i++)
  {
    if (i == ((n / 2) + 1))
      cout << "X";
    else
      cout << "*";
  }
  cout << endl;
  for (int i = 1; i <= n / 2; i++)
  {
    for (int j = 1; j <= n; j++)
      cout << "*";
    cout << endl;
  }
}
