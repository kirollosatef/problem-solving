#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  long long x;
  cin >> x;
  if (x % 2 == 0)
    cout << x / 2;
  else
    cout << -((x + 1) / 2);
}