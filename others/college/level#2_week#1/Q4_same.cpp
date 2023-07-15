#include <iostream>
using namespace std;
int main()
{
  string x;
  cin >> x;
  for (int i = 0; i < x.size(); i++)
  {
    if (x[i] != x[i + 1])
    {
      cout << x[i];
    }
    else
      i++;
  }
}