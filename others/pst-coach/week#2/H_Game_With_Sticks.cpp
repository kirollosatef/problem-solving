#include <iostream>
using namespace std;
int main()
{
  long x, y;
  cin >> x >> y;
  (x <= y) ? ((x % 2) ? cout << "Akshat" : cout << "Malvika")
           : ((y % 2) ? cout << "Akshat" : cout << "Malvika");
}