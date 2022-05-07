#include <iostream>
using namespace std;
int main()
{
  int tt;
  cin >> tt;
  while (tt--)
  {
    string x;
    cin >> x;
    (x.size() <= 10) ? cout << x << endl : cout << x[0] << x.size() - 2 << x[x.size() - 1] << endl;
  }
}