/*
**by:[̲̅K̲̅].[̲̅E̲̅].[̲̅R̲̅].[̲̅O̲̅]-_+[̲̅A̲̅].[̲̅T̲̅].[̲̅E̲̅].[̲̅F̲̅]
**in:16/4/2021
*/
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int arr[n][100], x[n];
  for (int i = 0; i < n; i++)
  {
    cin >> x[i];
    for (int j = 0; j < x[i]; j++)
      cin >> arr[i][j];
  }
  for (int i = 0; i < n; i++)
  {
    if (arr[i][0] != arr[i][1] && arr[i][0] != arr[i][2])
    {
      cout << 1 << "\n";
    }
    for (int j = 1; j < x[i] - 1; j++)
    {
      if (arr[i][j] != arr[i][j - 1] && arr[i][j] != arr[i][j + 1])
      {
        cout << j + 1 << "\n";
        break;
      }
      else if (arr[i][x[i]-1] != arr[i][x[i] - 2] && arr[i][x[i]-1] != arr[i][x[i] -3])
      {
        cout << x[i] << "\n";
        break;
      }
    }
  }
}