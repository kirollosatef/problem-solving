#include <iostream>
using namespace std;
int main()
{
  string s[2] = {"++X", "X++"}, x;
  int ans = 0, t;
  cin >> t;
  while (t--)
    cin >> x, (x == s[0] || x == s[1]) ? ans++ : ans--;
  cout << ans;
}