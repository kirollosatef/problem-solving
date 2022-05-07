#include <bits/stdc++.h>
using namespace std;
void dig(int &x)
{
  int sum = 0;
  while (x > 0)
  {
    sum += x % 10;
    x -= x % 10;
    x /= 10;
  }
  x = sum;
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int x, y;
  cin >> x >> y;
  dig(x);
  dig(y);
  (x >= y) ? cout << x : cout << y;
}