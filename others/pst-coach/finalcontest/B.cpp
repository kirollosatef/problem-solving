#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define sz(v) (v).size()
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
typedef long long ll;
int main()
{
  o_a;
  while (1)
  {
    int n, ok = 1;
    cin >> n;
    if (n == 0)
      break;
    int arr[n + 2];
    arr[0] = 0;
    arr[n + 1] = 1422;
    for (int i = 1; i <= n; i++)
      cin >> arr[i];
    n += 2;
    sort(arr, arr + n);
    for (int i = 1; i < n; i++)
      if (arr[i] - arr[i - 1] > 200)
      {
        ok = 0;
        break;
      }
    if (arr[n - 1] - arr[n - 2] > 100)
      ok = 0;
    (ok) ? cout << "POSSIBLE\n" : cout << "IMPOSSIBLE\n";
  }
}