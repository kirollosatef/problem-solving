#include <iostream>
using namespace std;
int main()
{
  long n, k, x, y;
  cin >> n >> k >> x >> y;
  if (n <= k)
    cout << n * x;
  else
    cout << k * x + (n - k) * y;
}