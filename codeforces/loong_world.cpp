#include <iostream>
using namespace std;
int main()
{
  string x;
  cin >> x;
  if (x.size() <= 10)
    cout << x;
  else
    cout << x[0] << x.size() - 2 << x[x.size() - 1];
}