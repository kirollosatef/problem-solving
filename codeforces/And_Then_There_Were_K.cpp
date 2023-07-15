#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long x;
    int ans = 1;
    cin >> x;
    for (short i = 0; ans * 2 <= x;)
    {
      ans *= 2;
    }
    cout << ans - 1 << endl;
  }
}