#include <bits/stdc++.h>
using namespace std;
int arr[600];
int main()
{
  int t = 2;
  while (t--)
  {
    string x, y;
    cin >> x >> y;
    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());
    for (int i = 0; i < x.size(); i++)
      for (int j = 0; j < y.size(); j++)
        arr[i + j] += (x[i] - '0') * (y[j] - '0');
    for (int i = 0; i < x.size() + y.size(); i++)
    {
      arr[i + 1] += arr[i] / 10;
      arr[i] %= 10;
    }
    int i = x.size() + y.size();
    while (i > 0 && arr[i] == 0)
      i--;
    for (; i >= 0; i--)
      cout << arr[i];
    cout << endl;
  }
}