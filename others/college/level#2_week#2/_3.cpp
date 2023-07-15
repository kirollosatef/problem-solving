#include <iostream>
using namespace std;
int main()
{
  int x, ans=0;
  cin >> x;
  for (int i = 1; i <= x/2; i++)
  {
    if (x % i == 0)
    {
      ans++;
    }
  }
  cout << ans;
}