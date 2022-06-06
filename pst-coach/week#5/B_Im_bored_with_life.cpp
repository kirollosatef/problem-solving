#include <iostream>
using namespace std;
int x, y;
int GCD(int i)
{
  if (i == x || i == y)
    return i;
  return i * GCD(i + 1);
}
int main()
{
  cin >> x >> y;
  cout << GCD(1);
}