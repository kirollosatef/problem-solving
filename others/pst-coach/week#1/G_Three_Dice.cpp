#include <iostream>
using namespace std;
void cg(int &x)
{
  x == 1   ? x = 6
  : x == 2 ? x = 5
  : x == 3 ? x = 4
  : x == 4 ? x = 3
  : x == 5 ? x = 2
           : x = 1;
}
int main()
{
  int x, y, z;
  cin >> x >> y >> z;
  cg(x), cg(y), cg(z);
  cout << x + y + z;
}