#include <iostream>
#include <string>
using namespace std;
int main()
{
  int t;
  cin >> t;
  string ans[t];
  for (int i = 0; i < t; i++)
  {
    int x;
    cin >> x;
    int arr[x];
    for (int j = 0; j < x; cin >> arr[j], j++)
      ;
    for (int k_1 = 0; k_1 < x - 1; k_1++)
    {
      // int ko = arr[k_1];
      for (int k_2 = k_1 + 1; k_2 < x; k_2++)
      {
        if (arr[k_1] == arr[k_2])
        {
          ans[i]="YES";
          k_1 = x ;
          break;
        }
      }
    }
    if (ans[i]!="YES")
    {
      ans[i] = "NO";
    }
  }
  for (int i = 0; i < t; i++)
  {
    cout << ans[i] << endl;
  }
  return 0;
}