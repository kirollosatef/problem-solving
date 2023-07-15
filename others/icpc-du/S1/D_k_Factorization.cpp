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
  int n, k;
  cin >> n >> k;
  int temp = n;
  vector<int> arr;
  for (int i = 2; i * i <= n; i++)
  {
    while (n % i == 0)
    {
      arr.pb(i);
      n /= i;
    }
  }
  if (n > 1)
    arr.pb(n);
  if (arr.size() < k)
  {
    cout << -1;
    return 0;
  }
  int p = 1;
  for (int i = 0; i < k - 1; i++)
  {
    cout << arr[i] << " ";
    p *= arr[i];
  }
  cout << temp / p;
}
