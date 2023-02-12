#include <bits/stdc++.h>
// #include <fstream>
using namespace std;
int main()
{
  ifstream cin("mex.txt");
  int T;
  cin >> T;
  while (T--)
  {
    int n, q;
    cin >> n >> q;
    int arr[n];
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for (int i = 0; i < n; ++i)
    {
      cin >> arr[i];
      if (arr[i] > maxi)
        maxi = arr[i];
      if (mini > arr[i])
        mini = arr[i];
    }
    while (q--)
    {
      int temp_min = mini;
      int l, r;
      cin >> l >> r;
      int freq[100001] = {0};
      l--;
      r--;
      for (int i = l; i <= r; ++i)
      {
        freq[arr[i]]++;
      }
      for (int i = 0; i <= r + 1; ++i)
      {
        if (freq[temp_min] == 0)
        {
          cout << temp_min << "\n";
          break;
        }
        else
        {
          temp_min++;
        }
      }
      //cout << endl;
    }
  }
  cin.close();
  return 0;
}