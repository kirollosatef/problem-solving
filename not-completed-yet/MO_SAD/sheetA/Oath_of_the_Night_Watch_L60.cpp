#include <iostream>
using namespace std;
int main()
{
  long long n, mx = 0, mn = 1e9, ans = 0;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    if (mx < arr[i])
      mx = arr[i];
    if (mn > arr[i])
      mn = arr[i];
  }
  for (int i = 0; i < n; i++)
    if (arr[i] > mn && arr[i] < mx)
      ans++;
  cout << ans;
}