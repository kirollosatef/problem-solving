/**
**By:kero_atef ✝
**Date:2021/11/07-14:02
**/

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int arr[n], count[3] = {0};
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    count[arr[i] - 1]++;
  }
  int miin = count[0];
  for (int i = 1; i < 3; i++)
    miin = min(miin, count[i]);
  cout << miin << endl;
  while (miin--)
  {
    for (int j = 0; j < n; j++)
      if (arr[j] == 1)
      {
        cout << j + 1 << " ";
        arr[j] = 0;
        break;
      }
    for (int j = 0; j < n; j++)
      if (arr[j] == 2)
      {
        cout << j + 1 << " ";
        arr[j] = 0;
        break;
      }
    for (int j = 0; j < n; j++)
      if (arr[j] == 3)
      {
        cout << j + 1 << " ";
        arr[j] = 0;
        break;
      }
    cout << endl;
  }
}