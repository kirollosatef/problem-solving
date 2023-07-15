#include <iostream>
using namespace std;
int main()
{
  int x, y;
  cin >> x;
  int arr[x];
  for (int i = 0; i < x; cin >> arr[i], i++)
    ;
  for (int i = 0; i < x - 1; i++)
  {
    if (arr[i] == arr[i + 1])
    {
    }
    else
      y++;
  }
  cout << y + 1;
}