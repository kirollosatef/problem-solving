#include <iostream>
using namespace std;
bool is(int x)
{
  for (int i = 2; i <= x / 2; i++)
    if (x % i == 0)
      return 0;
  return 1;
}
int main()
{
  int x;
  cin >> x;
  is(x) ? cout << "YES\n" : cout << "NO\n";
}