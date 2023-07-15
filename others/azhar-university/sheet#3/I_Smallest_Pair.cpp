#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, r = 0, min;
    cin >> n;
    int arr[n], rr[((n - 1) * ((n - 1) - 1)) / 2];
    for (int i = 0; i < n; cin >> arr[i], i++)  
      ;
    for (int i = 0; i < n - 1; i++)
    {
      for (int j = i + 1; j < n; j++)
      {
        rr[r] = arr[i] + arr[j] + ((j + 1) - (i + 1));
        r++;
      }
    }
    min = rr[0];
    for (int i = 1; i < r; i++)
      if (min > rr[i])
        min = rr[i];
    cout << min << endl;
  }
}