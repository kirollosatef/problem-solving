/**
**By:kero_Atef
**Date:2021/06/02-22:06
**/
#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x, y, o = 0;
    cin >> x;
    y = ((x * (x + 1)) / 2);
    int arr[x], sub[y];
    for (int i = 0; i < x; cin >> arr[i], i++)
      ;
    for (int k = 1; k <= x; k++)
    {
      int j, max;
      for (int i = 0; i <= x - k; i++)
      {
        max = arr[i];
        for (j = 1; j < k; j++)
        {
          
          if (arr[j + i] > max)
            max = arr[j + i];
        }
        cout << max << " ";
      }
    }
    cout << endl;
  }
}