#include <iostream>
using namespace std;
int main()
{
  int n, x, z = 0;
  cin >> n >> x;
  int arr[n];
  for (int i = 0; i < n; i += 2)
  {
    arr[z] = i + 1;
    z++;
  }
  for (int i = 1; i < n; i += 2)
  {
    arr[z] = i + 1;
    z++;
  }
  cout << arr[x - 1];
}