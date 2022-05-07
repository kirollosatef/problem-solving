#include <iostream>
using namespace std;
int main()
{
  int n, ans = 0;
  cin >> n;
  char str[n];
  for (int i = 0 ; i < n ;cin >> str[i],i++);
  for (int i = 0; i < n; i++)
  {
    if (str[i] == str[i + 1])
      ans++;
  }
  cout << ans;
}