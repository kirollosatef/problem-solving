#include <bits/stdc++.h>
using namespace std;
int main()
{
  int x;
  cin >> x;
  int row = x * 2;
  for (int i = 0; i <= x; i++)
  {
    for (int j = 0; j < row; j++)
      cout << " ";
    for (int j = 0; j <= i; j++)
      (j == 0) ? cout << 0 : cout << j << " ";
    for (int j = i - 1; j >= 0; j--)
      (j == 0) ? cout << 0 : cout << j << " ";
    row -= 2;
    cout << endl;
  }
  row = 2;
  for (int i = x - 1; i >= 0; i--)
  {
    for (int j = 0; j < row; j++)
      cout << " ";
    for (int j = 0; j <= i; j++)
      (j == 0) ? cout << 0 : cout << j << " ";
    for (int j = i - 1; j >= 0; j--)
      (j == 0) ? cout << 0 : cout << j << " ";
    row += 2;
    cout << endl;
  }
}