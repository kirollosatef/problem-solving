#include <iostream>
using namespace std;
int main()
{
  int x, min, pm;
  cin >> x;
  int arr[x];
  for (int i = 0; i < x; cin >> arr[i], i++)
    ;
  min = arr[0];
  pm = 1;
  for (int i = 0; i < x; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
      pm = i+1;
    }
  }
  cout << min << " " << pm;
}