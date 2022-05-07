#include <iostream>
using namespace std;
bool IS(int x)
{
  for (int i = 2; i < x; i++)
    if (x % i == 0)
      return 0;
  return 1;
}
int main()
{
  int x;
  cin >> x;
  for (int i = 2; i <= x; i++)
    IS(i) ? cout << i << " " : cout << "";
}