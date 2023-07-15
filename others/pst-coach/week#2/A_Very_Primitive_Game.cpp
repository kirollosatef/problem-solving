#include <iostream>
using namespace std;
int main()
{
  int x, y, z;
  cin >> x >> y >> z;
  if (x == y )
  {
    if (z == 0)
      cout << "Aoki";
    else
      cout << "Takahashi";
  }
  else if (x > y)
    cout << "Takahashi";
  else
    cout << "Aoki";
}