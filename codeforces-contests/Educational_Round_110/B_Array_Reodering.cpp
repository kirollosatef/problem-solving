#include <bits/stdc++.h>
using namespace std;
void SWAP(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}
void SSOORRTT(int array[], int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
      if (array[j] % 2 == 0)
        SWAP(array[i], array[j]);
  }
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    int n, ans = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; cin >> arr[i], i++)
      ;
    SSOORRTT(arr, n);
    for (int i = 0; i < n; i++)
      for (int j = i + 1; j < n; j++)
        if (__gcd(arr[i], 2 * arr[j]) > 1)
          ans++;
    cout << ans << endl;
  }
}