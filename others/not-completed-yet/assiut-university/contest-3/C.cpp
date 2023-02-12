#include <bits/stdc++.h>
using namespace std;
int sumDigits(int n)
{
  int sum = 0;
  while (n)
  {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}
int solve(int i, int j)
{
  if (i / 10 == 0)
    return sumDigits(i);
  if (j == 0)
    return sumDigits(i);
  return solve(sumDigits(i), j - 1);
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int i, j;
    cin >> i >> j;
    cout << solve(i, j) << endl;
  }
}
