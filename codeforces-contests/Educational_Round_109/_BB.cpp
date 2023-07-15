#include <iostream>
#include <cmath>
using namespace std;
void fr(int arr[], int xarr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    xarr[i] = abs((i + 1) - arr[i]);
  }
}
int maxpoint(int arr[], int n)
{
  int max = arr[0], point;
  for (int i = 0; i < n; i++)
  {
    if (max < arr[i])
    {
      max = arr[i];
      point = i;
    }
  }
  return point;
}
int sumar(int arr[], int &n)
{
  int sum = 0;
  for (int i = 0; i < n; i++)
    sum += arr[i];
  return sum;
}
int main()
{
  int t;
  cin >> t;
  int ans[t];
  for (int tt = 0; tt < t; tt++)
  {
    int n, ans = 0;
    cin >> n;
    int arr[n], xarr[n] = {0};
    for (int i = 0; i < n; cin >> arr[i], i++)
      ;
    fr(arr, xarr, n);
    // cout << sumar(xarr, n) << endl;
    for (int i = 0; i < 1;)
    {
      int p1 = maxpoint(xarr, n), p2;
      if (p1 == n - 1 || (abs(arr[p1] - arr[p1 - 1]) > abs(arr[p1] - arr[p1 + 1])))
        p2 = p1 - 1;
      else if (p1 - 1 == 0 || (abs(arr[p1] - arr[p1 - 1]) < abs(arr[p1] - arr[p1 + 1])))
        p2 = p1 + 1;
      for (int i = arr[p1] - 1; i <= arr[p2]; i++)
        arr[i] = i + 1;
      fr(arr, xarr, n);
      cout << p1 << " " << p2 << endl;
      for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
      i++;
      ans++;
    }
    // cout << ans;
  }
}