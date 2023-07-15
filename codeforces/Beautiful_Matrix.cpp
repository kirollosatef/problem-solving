/**
 *    author:  KeroAtef
**/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int m[5][5], x, y;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      cin >> m[i][j];
      if (m[i][j] == 1)
      {
        x = i + 1;
        y = j + 1;
      }
    }
  }
  cout << abs(x - 3) + abs(y - 3);
  return 0;
}