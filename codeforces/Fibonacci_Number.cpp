#include <iostream>
using namespace std;
int main()
{
  int n, t1 = 1 , t2 = 1, nextTerm = 0;
  cin >> n;
  for (int i = 1; i <= n; ++i)
  {
    if (i == 1)
    {
      nextTerm = t1;
      continue;
    }
    if (i == 2)
    {
      nextTerm = t2;
      continue;
    }
    nextTerm = t1 + t2;
    t1 = t2;
    t2 = nextTerm;
  }
  cout << nextTerm;
  return 0;
}