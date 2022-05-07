#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int x, ans;
  cin >> x;
  vector<int> s;
  for (int i = 1; i <= x; i++)
  {
    if (x % i == 0)
      s.push_back(i);
  }
  for (int i = 0; i < s.size(); i++)
    ans += s[i];
  cout << ans ;
}