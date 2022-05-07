#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int cases;
  cin >> cases;
  string ans[cases];
  for (int i = 0; i < cases; i++)
  {
    int r, b, d, wla;
    cin >> r >> b >> d;
    for (int j = 0 ; j < 1 ;)
    {
    wla = abs(r - b);
    if (wla <= d)
    {
      ans[i] = "YES";
      j = 1 ;
    }
    else
    {
      r--;
      b--;
    }
    }
  }
  for (int i = 0; i < cases; i++)
  {
    cout << ans[i] << endl;
  }
}