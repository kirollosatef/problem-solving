#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int x;
  cin >> x;
  string ans[x];
  for (int y = 0; y < x; y++)
  {
    int o, m = 1, ssqq, eqwa;
    double sq;
    cin >> o;
    int arr[o];
    for (int i = 0; i < o; cin >> arr[i], i++)
      ;
    for (int i = 0; i < o; i++)
    {
      m = m * arr[i];
    }
    sq = sqrt(m);
    ssqq = sqrt(m);
    for (int i = 1; i <= ssqq; i++)
    {
      eqwa = eqwa + (2 * i + 1);
    }
    if (m == eqwa)
      ans[y] = "NO";
    else
      ans[y] = "YES";
  }
  for (int i = 0; i < x; i++)
  {
    cout << ans[i] << endl;
  }
  return 0;
}
// cout << eqwa ;
// if (arr[i] % 10 == 0)
// {
//   arr[i] = arr[i] / 10;
//   i--;
// }
// else