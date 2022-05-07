#include <iostream>
#include <string>
using namespace std;
void UP(string &);
void COM(string, string);
int main()
{
  string x, y;
  cin >> x >> y;
  UP(x);
  UP(y);
  COM(x, y);
}
void UP(string &x)
{
  for (int i = 0; i < x.size(); i++)
  {
    if (x[i] >= 'a' && x[i] <= 'z')
    {
      x[i] -= 32;
    }
  }
}
void COM(string _1, string _2)
{
  if ((_1.compare(_2)) == 0)
    cout << 0;
  if ((_1.compare(_2)) > 0)
    cout << 1;
  else if ((_1.compare(_2)) < 0)
    cout << -1;
}