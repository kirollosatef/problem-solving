#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  if (n == 1)
  {
    cout << "yes\n";
    return 0;
  }
  int arr[n][9];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < 9; j++)
      cin >> arr[i][j];
  for (int i = 0; i < n - 1; i++)
  {
    int c = 0;
    for (int j = 0; j < 4; j++)
    {
    }
    if (c < 6)
    {
      cout << "no\n";
      return 0;
    }
  }
  cout << "yes\n";
}