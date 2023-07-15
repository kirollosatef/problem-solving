/**
**By:kero_Atef ✝
**Date:2021/06/25-17:59
**/
#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  // int t;
  // cin >> t;
  // while (t--)
  // {
  long long n, ans = 0;
  cin >> n;
  long long arr[n];
  long long count[n] = {0};
  for (long long i = 0; i < n; i++)
  {
    cin >> arr[i];
    count[arr[i]]++;
  }
  for (long long i = 0; i < n; i++)
  {
    if ((i + 1) / arr[i] >= 1)
  }
  cout << ans << endl;
  // }
}