#include <iostream>
using namespace std;
int biiig(int n1,int n2,int n3)
{
  if (n1 >= n2 && n1 >= n3)
    return n1;
  else if (n2 >= n1 && n2 >= n3)
    return n2;
  else
    return n3;
}
int main()
{
  int x, y, z, ans = 0;
  cin >> x >> y >> z;
  for (int i = 0; i < 1;)
  {
    if (((x + y + z + ans) - biiig(x, y, z)) > biiig(x, y, z))
    {
      cout << ans;
      i++;
    }
    else
      ans++;
  }
}