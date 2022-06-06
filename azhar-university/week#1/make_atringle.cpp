#include <iostream>
using namespace std;
int get_the_big(int a, int b, int c);
int main()
{
  int x, y, z, big, count;
  cin >> x >> y >> z;
  big = get_the_big(x, y, z);
  for (int i = 0; i < 1;)
  {
    if ((x + y + z + count - big) > big)
    {
      cout << count;
      return 0;
    }
    else
    {
      count++;
    }
  }
}
int get_the_big(int a, int b, int c)
{
  int big;
  if (a > b && a > c)
    return a;
  else if (b > a && b > c)
    return b;
  else
    return c;
}