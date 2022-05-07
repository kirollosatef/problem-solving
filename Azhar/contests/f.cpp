#include <iostream>
using namespace std;
int main()
{
  long long n, ans = 0;
  cin >> n;
  for (long long i = 0; i < n; i++)
  {
    long long x, y;
    cin >> x >> y;
    if (x == y)
      continue;
    ans++;
  }
  cout << ans << endl;
}