#include <iostream>
using namespace std;
int main()
{
  long long x, y;
  cin >> x >> y;
  long long temp;
  temp = x;
  x = y;
  y = temp;
  cout << x << " \"" << y<< "\"";
}