#include <iostream>
using namespace std;
int x = 100;
int primes[4] = {2, 3, 5, 7};
int inc_exc(int idx = 0, int d = 1, int sign = -1)
{
  if (idx == 4)
  {
    if (d == 1)
      return 0;
    return sign * x / d;
  }
  return inc_exc(idx + 1, d, sign) + inc_exc(idx + 1, d * primes[idx], sign * -1);
}
int main()
{
  int n;
  // cin >> n;
  int ans = 0;
  //? if you want to know what nums Divide by 2 || 3 || 5 || 7
  cout << inc_exc();
  // for (int i2 = 0; i2 < 2; i2++)
  //   for (int i3 = 0; i3 < 2; i3++)
  //     for (int i5 = 0; i5 < 2; i5++)
  //       for (int i7 = 0; i7 < 2; i7++)
  //       {
  //         int d = 1, cot = 0;
  //         if (i2)
  //           d *= 2, cot++;
  //         if (i3)
  //           d *= 3, cot++;
  //         if (i5)
  //           d *= 5, cot++;
  //         if (i7)
  //           d *= 7, cot++;
  //         if (cot == 0)
  //           continue; //nothing selected
  //         int sign = (cot % 2 == 1) ? 1 : -1;
  //         ans += sign * n / d;
  //       }
  // /*
  // ** if n == 10
  // ** 1 2 3 4 5 6 7 8 9 10
  // ** ✖ ✔ ✔ ✔ ✔ ✔ ✔ ✔ ✔ ✔ == 9
  // ** the code return 9
  // */
  // cout << ans << endl;
}