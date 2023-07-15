#include <iostream>
using namespace std;
int main()
{
  int r1, r2, c1, c2, d1, d2;
  int x, y, z, n;
  cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
  bool ok = 0;
  for (int i = 1; (i <= 9) && (!ok); i++)
  {
    x = i;
    y = r1 - x;
    z = c1 - x;
    n = d1 - x;
    if (y + n == c2 && y + z == d2 && z + n == r2)
      if (x != z && x != n && x != y && y != z && y != n && z != n)
        if (x < 10 && y < 10 && z < 10 && n < 10)
          if (x > 0 && y > 0 && z > 0 && n > 0)
            ok = 1;
  }
  if (!ok)
  {
    cout << -1;
    return 0;
  }
  cout << x << " " << y << endl;
  cout << z << " " << n << endl;
}