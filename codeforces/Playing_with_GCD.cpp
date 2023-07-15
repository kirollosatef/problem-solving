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
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int arr[n], ok = 0;
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    if (n == 1)
    {
      cout << "YES" << endl;
      continue;
    }
    for (int i = 0; i < n; i++)
    {
      if (arr[i] == arr[i + 2] && arr[i] != 1)
      {
        cout << "NO" << endl;
        ok = 1;
        break;
      }
    }
    if (!ok)
      cout << "YES" << endl;
  }
}
