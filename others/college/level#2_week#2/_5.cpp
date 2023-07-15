#include <iostream>
using namespace std;
int max(int arr[], int n)
{
  int M = arr[0];
  for (int i = 1; i < n; i++)
    if (arr[i] >= M)
      M = arr[i];
  return M;
}
int min(int arr[], int n)
{
  int M = arr[0];
  for (int i = 1; i < n; i++)
    if (arr[i] <= M)
      M = arr[i];
  return M;
}
int main()
{
  int n, co = 0;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; cin >> arr[i], i++)
    ;
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] + arr[j] == max(arr, n) + min(arr, n))
        co++;
    }
  }
  cout << co ;
}