#include <iostream>
using namespace std;
void solve(int x)
{
  for (int i = 1; i <= x; i++)
    if (x % i == 0)
      cout << i << endl;
}
int main()
{
  int x;
  cin >> x;
  solve(x);
}