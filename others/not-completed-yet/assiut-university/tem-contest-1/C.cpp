#include <bits/stdc++.h>
using namespace std;
float findRadiusOfcircumcircle(float n, float a)
{
  if (n < 0 || a < 0)
    return -1;
  float radius = a / sqrt(2 - (2 * cos(360 / n)));
  return radius;
}
int main()
{
  float n, a;
  cin >> n >> a;
  cout << findRadiusOfcircumcircle(n, a) << endl;
  return 0;
}
