#include <iostream>
using namespace std;
int main()
{
  int x, i = 2;
  cin >> x;
  if (x < 2)
  {
    cout << -1;
    return 0;
  }
  while (i <= x)
  {
    cout << i << endl;
    i += 2;
  }
}