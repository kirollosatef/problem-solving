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
  ll n;
  cin >> n;
  ll arr[12];
  for (int i = 0; i < 12; i++)
    cin >> arr[i];
  if (n == 0)
  {
    cout << 0;
    return 0;
  }
  sort(arr, arr + 12);
  ll sum = 0, count = 0;
  for (int i = 11; i >= 0; i--)
  {
    sum += arr[i];
    count++;
    if (sum >= n)
    {
      cout << count;
      return 0;
    }
  }
  cout << -1;
  return 0;
}