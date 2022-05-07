#include <iostream>
using namespace std;
int main()
{
  int k, s, ans = 0;
  cin >> k >> s;
  for (int x = 0; x <= k; x++)
    for (int y = 0; y <= k; y++)
    {
      int z = s - (x + y);
      if (x + y + z == s && z <= k && z >= 0)
        ans++;
    }
  cout << ans;
}