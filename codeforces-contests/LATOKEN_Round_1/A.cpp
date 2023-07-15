#include <bits/stdc++.h>
using namespace std;
void COM(string &str, int x)
{
  int index = x - 1, y = str.size();
  string rw = "RW", wr = "WR";
  str = "";
  if (index == 0)
  {
    for (int i = 0; i < y; i++)
      str += rw[i % 2];
  }
  else if (index == 1)
  {
    for (int i = 0; i < y; i++)
      str += wr[i % 2];
  }
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int x, y;
  cin >> x >> y;
  string RW[x];
  int arrR[x] = {0}, arrW[x] = {0};
  for (int i = 0; i < x; i++)
    cin >> RW[i];
  for (int i = 0; i < x; i++)
  {
    for (int j = 0; j < y; j++)
      if (RW[i][j] == 'R')
      {
        arrR[i] = j % 2 + 1;
        break;
      }
    if (arrR[i] == 0)
    {
      for (int j = 0; j < y; j++)
        if (RW[i][j] == 'W')
          arrW[i] = j % 2 + 1;
    }
  }
  for (int i = 0; i < x; i++)
  {
    if (arrW[i] == 1)
      arrR[i] = 2;
    else if (arrW[i] == 2)
      arrR[i] = 1;
    if (arrR[i] != 0)
      COM(RW[i], arrR[i]);
    cout << RW[i] << endl;
  }
}