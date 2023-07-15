#include <iostream>
using namespace std;
int main()
{
  int arr[5][5], R = 0, RR = 0;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      if (arr[i][j] == 1 && i >= 3 && j >= 3)
      {
        R = (i + 1) % 3;
        RR = (j + 1) % 3;
      }
      else if (arr[i][j] == 1 && i < 3 && j < 3)
      {
        R = 3 - (i + 1);
        RR = 3 - (j + 1);
      }
      else if (arr[i][j] == 1 && i >= 3 && j< 3)
      {
        R = (i + 1) % 3;
        RR = 3 - (j + 1);
      }
      else if (arr[i][j] == 1 && i < 3 && j >= 3)
      {
        RR = (j + 1) % 3;
        R = 3 - (i + 1);
      }
    }
  }
  cout << R + RR;
  return 0;
}