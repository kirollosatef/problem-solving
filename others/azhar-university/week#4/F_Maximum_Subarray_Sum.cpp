#include <iostream>
using namespace std;
int main()
{
  long long x, mx = 0;
  cin >> x;
  long long arr[x], ans[x * (x + 1) / 2];
  for (long long i = 0; i < x; i++)
    cin >> arr[i];
  int p = 0;
  for (long long k = 0; k < x; k++)
  {
    for (long long i = 0; i < x; i++)
    {
      long long sum = 0;
      for (long long j = i; j < i + 1 + k; j++)
      {
        sum += arr[j];
      }
      ans[p] = sum;
    }
  }
  for (long long i = 0; i < (x * (x + 1) / 2); i++)
    cout << ans[i] << " ";
}