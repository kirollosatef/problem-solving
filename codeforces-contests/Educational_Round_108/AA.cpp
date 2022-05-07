#include <iostream>
#include <cmath>
using namespace std;
int big(int x, int y)
{
  if (x > y)
    return x;
  else
    return y;
}
int sml(int x, int y)
{
  if (x < y)
    return x;
  else
    return y;
}
int main()
{
  int cases;
  cin >> cases;
  string ans[cases];
  for (int i = 0; i < cases; i++)
  {
    int r, b, d;
    cin >> r >> b >> d;
    if (d == 0 && r == b)
    {
      ans[i] = "YES";
    }
    else if ((r == 1 || b == 1) && abs(r - b) > d)
    {
      ans[i] = "NO";
    }
    else if (((big(r, b)) / (sml(r, b))) <= d)
    {
      ans[i] = "YES";
    }
    else
      ans[i] = "NO";
  }
  for (int i = 0; i < cases; i++)
  {
    cout << ans[i] << endl;
  }
}