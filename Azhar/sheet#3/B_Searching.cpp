#include <iostream>
using namespace std;
int main()
{
  int n, x, point;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; cin >> arr[i], i++)
    ;
  cin >> x;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == x)
    {
      cout << i;
      return 0;
    }
  }
  cout << -1;
}