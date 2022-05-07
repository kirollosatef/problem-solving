#include <bits/stdc++.h>
using namespace std;
#define pd push_back
#define sz(v) (v).size()
typedef long long ll;
void faster()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
}
int main()
{
  faster();
  ll n, ans = 0;
  cin >> n;
  ll arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  sort(arr, arr + n);
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > 0)
    {
      if (i > 0)
        ans = abs(arr[i]) - abs(arr[i - 1]);
      else if (i == 0)
        ans = arr[1] - arr[0];
    }
  }
  cout << ans << endl;
  for (int i = 0; i < n; i++)
  {
    if (abs(arr[i + 1]) - abs(arr[i]) == ans)
      cout << arr[i] << " " << arr[i + 1] << " ";
  }
}