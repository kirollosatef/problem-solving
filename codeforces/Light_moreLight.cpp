#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int i = 0;
  while (!i)
  {
    unsigned int x;
    cin >> x;
    if (!x)
      break;
    unsigned int sq = (int)sqrt(x);
    cout << ((sq * sq == x) ? "yes\n" : "no\n");
  }
}