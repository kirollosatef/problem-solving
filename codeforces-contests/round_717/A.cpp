#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int t , kkk=100;
  cin >> t;
  int  l[t];
  vector<vector<int>> ans(t , vector<int> (kkk));
  vector<int>kero;
  for (int i = 0; i < t; i++)
  {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int j = 0; j < n; cin >> arr[j], j++)
      ;
    for (int j = 0; j < k; j++)
    {
      if (arr[0] >= 1)
      {
        arr[n - 1] = arr[n - 1] + 1;
        arr[0] = arr[0] - 1;
      }
      else
        break;
    }
    l[i] = n;
    kkk = n ;
    int temp;
    for (int j = 0; j < n; j++)
    {
      temp = arr[j];
      kero.push_back(temp);
    }
  }
  // for(int i = 0; i < t; i++)
  //   {
  //       for(int j = 0; j < l[i]; j++)
  //       {
  //           cout << ans[i][j] << " ";
  //       }
  //       cout << endl;
  //   }
  for (int i = 0 ; i < kero.size(); i++)
  {
    cout << kero[i] << " ";
  }
}