#include <iostream>
using namespace std;
int main()
{
  int n, k;
  cin >> n >> k;
  string s = "abcdefghijklmnopqrstuvwxyz";
  char ans[n];
  for (int i = 0; i < n; i++)
  {
    ans[i] = s[i % k];
  }
  for (int i = 0; i < n; i++)
  {
  cout << ans[i] ;
  }
  return 0;
}