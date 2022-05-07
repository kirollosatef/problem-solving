#include <iostream>
using namespace std;
int main()
{
  int n, k, c = 0, ret = -1, sum = 0;
  cin >> n >> k;
  string s = "0123456789";
  string num;
  while (n--)
  {
    cin >> num;
    for (int i = 0; i <= k; i++)
    {
      ret = num.find(s[i]);
      if (ret != -1)
      {
        c++;
        ret = -1;
      }
    }
    if (c >= k + 1)
      sum++;
    c = 0;
  }
  cout << sum;
}