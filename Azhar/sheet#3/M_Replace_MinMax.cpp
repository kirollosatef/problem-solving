#include <iostream>
using namespace std;
int main()
{
  long long n, mx = -1e9, mn = 1e9, p1, p2;
  cin >> n;
  long long arr[n];
  for (long long i = 0; i < n; i++)
  {
    cin >> arr[i];
    if (mx < arr[i])
    {
      mx = arr[i];
      p1 = i;
    }
    if (mn > arr[i])
    {
      mn = arr[i];
      p2 = i;
    }
  }
  swap(arr[p1], arr[p2]);
  for (long long i = 0; i < n; i++)
    cout << arr[i] << " ";
}