#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    string str;
    cin >> n >> m >> str;
    int arr[n];
    for (int i = 0; i < n; i++)
      arr[i] = (str[i] - '0');
    for (int i = 0; i < n; i++)
    {
      if (arr[i - 1] == 1 && arr[i] == 0 && arr[i + 1] == 1)
      {
        arr[i] = 5;
        i++;
      }
    }
    for (int k = 0; k < m; k++)
    {
      for (int i = 0; i < n; i++)
      {
        if (arr[i] == 0 && arr[i + 1] == 1)
        {
          arr[i] = 1;
          i++;
        }
        else if (arr[i] == 0 && arr[i - 1] == 1)
        {
          arr[i] = 1;
          i++;
        }
        else
        {
        }
      }
    }
    for (int i = 0; i < n; i++)
    {
      if (arr[i] == 5)
        arr[i] = 0;
      cout << arr[i];
    }
    cout << endl;
  }
}