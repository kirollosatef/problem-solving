#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, sum = 0, now = 0, ans = 0;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    sum += arr[i];
  }
  sort(arr, arr + n);
  for (int i = 0; i < n; i++)
  {
    now += arr[i];
    ans++;
    if (now > (sum / 2))
      break;
  }
  cout << ans << endl;
}