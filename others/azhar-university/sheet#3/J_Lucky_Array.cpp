#include <iostream>
using namespace std;
int main()
{
  int x, min, ans = 0;
  cin >> x;
  int arr[x];
  for (int i = 0; i < x; cin >> arr[i], i++)
    ;
  min = arr[0];
  for (int i = 0; i < x; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
      ans = 0;
    }
    if (min == arr[i])
      ans++;
  }
  if (ans % 2 == 0)
    cout << "Unlucky";
  else
    cout << "Lucky";
}