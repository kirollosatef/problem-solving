#include <iostream>
using namespace std;
int main()
{
  int k_2, k_3, k_5, k_6, x_256 = 0, x_32 = 0;
  cin >> k_2 >> k_3 >> k_5 >> k_6;
  for (int i = 0; i < 1;)
  {
    if (k_2 >= 1 && k_5 >= 1 && k_6 >= 1)
    {
      x_256++;
      k_2 -= 1;
      k_5 -= 1;
      k_6 -= 1;
    }
    else if (k_3 >= 1 && k_2 >= 1)
    {
      x_32++;
      k_3 -= 1;
      k_2 -= 1;
    }
    else
      i = 1;
  }
  cout << ((x_256 * 256) + (x_32 * 32));
}