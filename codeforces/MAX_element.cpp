#include <iostream>
using namespace std;
int max(int arr[], int n);
int main()
{
  int x;
  cin >> x;
  int a[x];
  for (int i = 0; i < x ; cin >> a[i],i++);
  cout << max(a, x);
}
int max(int arr[], int n)
{
  int max = arr[0];
  for (int i = 1; i < n; i++)
    if (arr[i] > max)
      max = arr[i];
  return max;
}