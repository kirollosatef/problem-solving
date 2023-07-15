#include <iostream>
using namespace std;
int main()
{
  int n, t, k, d;
  cin >> n >> t >> k >> d;
  int stp = (n + k - 1) / k;
  int x = stp * t;
  int y = ((x - 1) / t);
  if (x - 1 > d)
    y += ((x - 1 - d) / t);
  (y * k >= n) ? cout << "YES" : cout << "NO";
}