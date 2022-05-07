#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  int ans[t];
  for (int tt = 0; tt < t; tt++)
  {
    long long n, sum = 0;
    cin >> n;
    long long arr[n], x[n] = {0};
    for (int i = 0; i < n; cin >> arr[i], i++)
      ;
    for (int i = n - 1; i >= 0; i--)
    {
      for (int j = i - 1; j >= 0; j--)
      {
        if (arr[i] < arr[j])
        {
          x[i]++;
        }
      }
    }
    for (int i = 0; i < n; i++)
    {
      if (x[i] > 0)
      {
        sum++;
      }
    }
    ans[tt] = sum;
  }
  for (int i = 0; i < t; i++)
  {
    cout << ans[i] << endl;
  }
}