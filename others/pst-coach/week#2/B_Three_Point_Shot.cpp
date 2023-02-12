#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int x, y;
  cin >> x >> y;
  (abs(x - y) < 3) ? cout << "Yes" : cout << "No";
}