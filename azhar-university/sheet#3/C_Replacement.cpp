#include <iostream>
using namespace std;
int main()
{
  int x;
  cin >> x;
  int arr[x];
  for (int i = 0; i < x; i++)
  {
    cin >> arr[i];
    if (arr[i] > 0)
      arr[i] = 1;
    else if (arr[i] < 0)
      arr[i] = 2;
  }
  for (int i = 0; i < x; i++)
    cout << arr[i] << " ";
}