#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
  int sum = 0, k, e;
  string n, u;
  stringstream ss;
  cin >> n >> k;
  for (int i = 0 ; i < k; i++)
  {
    n += u;
  }
  for (int i = 0; i < 1;)
  {
    for (int s = 0; s < n.size(); s++)
    {
      sum += (n[s] - 48);
    }
    if (sum / 10 == 0)
    {
      cout << sum;
      i++;
    }
    else
    {
      e = sum;
      ss << e;
      ss >> n;
      sum = 0;
    }
  }
  return 0;
}