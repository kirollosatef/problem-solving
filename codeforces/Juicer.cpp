#include <iostream>
using namespace std;
int main()
{
  long long n, b, d, x;
  int nd = 0, ans = 0;
  cin >> n >> b >> d;
  for (int i = 0; i < n; i++)
  {
    cin >> x;
    if (x <= b)
      nd += x;
    if (nd > d)
    {
      ans++;
      nd = 0;
    }
  }
  cout << ans;
}