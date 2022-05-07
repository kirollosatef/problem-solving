#include <iostream>
#include <cmath>
using namespace std;
void swap(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}
int main()
{
  int n, sum;
  cin >> n;
  int arr[n], d[n] = {0};
  for (int i = 0; i < n; cin >> arr[i], i++)
    ;
  if (n == 1)
  {
    cout << "0";
    return 0;
  }
  for (int i = n - 1; i >= 0; i--)
  {
    for (int j = i - 1; j >= 0; j--)
      if (arr[i] < arr[j])
        swap(arr[i], arr[j]);
  }
  for (int i = 1; i < n; i++)
  {
    d[i] = arr[n - 1] - arr[n - 1 - i];
  }
  for (int i = 0; i < n; i++)
  {
    cout << d[i] << " ";
    sum += d[i];
  }
  cout << sum;
}