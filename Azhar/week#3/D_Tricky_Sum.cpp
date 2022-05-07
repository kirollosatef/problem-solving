/**
**By:kero_Atef ✝
**Date:2021/06/22-12:51
**/
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long x;
    cin >> x;
    int power = 0;
    power = log2(x);
    //? 2^0 + 2^1 + 2^2 + ... + 2^n == 2 * 2^n -1
    //? 1 + 2 + 3 + 4 + ... + n == n * (n+1) / 2
    x = (x * (x + 1) / 2) - 2 * (2 * pow(2, power) - 1);
    cout << x << endl;
  }
}