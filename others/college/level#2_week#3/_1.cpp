#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "enter the number of array\n";
  cin >> n;
  int arr[n], ans[n], x = 0, zero = 0;
  for (int i = 0; i < n; cin >> arr[i], i++)
    ;
  for (int i = 0; i < n; i++)
    if (arr[i] == 0)
      zero++;
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] == arr[j] && arr[i] != 0)
      {
        zero--;
        if (zero < 0)
        {
          cout << "empty array\n";
          return 0;
        }
        break;
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > 0)
    {
      ans[i] = -1;
      x = 1;
    }
    else if (arr[i] == 0)
    {
      ans[i] = arr[i - x];
      x += 2;
    }
  }
  for (int i = 0; i < n; i++)
    cout << ans[i] << " ";
}