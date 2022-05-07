#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x, n = 1;
    cin >> x;
    if (x == 1 || x == 2 || x == 0)
      n = x * 2;
    for (int i = 2; i < x; i++)
    {
      n = n * 2;
      if (n >= x)
        break;
    }
    cout << n / 2 << endl;
  }
}