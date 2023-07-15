#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    sort(arr, arr + n);
    cout << abs(arr[n - 2] - arr[n - 1]) + abs(arr[n - 1] - arr[0]) << endl;
  }
}
