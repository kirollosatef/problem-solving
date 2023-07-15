#include <bits/stdc++.h>
using namespace std;
// typedef long long ll;
int main()
{
  int x, y;
  cin >> x >> y;
  int ans = -1;
  for (int i = sqrt(y); i > 0; i--)
  {
    if (x <= pow(2, i) && pow(2, i) <= y)
    {
      ans = pow(2, i);
      break;
    }
  }
  cout << ans << endl;
}
