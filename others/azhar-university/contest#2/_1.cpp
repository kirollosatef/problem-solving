#include <iostream>
using namespace std;
int main()
{
  int x;
  cin >> x;
  cout << ((x < 10) ? "less" : ((x < 100) ? "hn" : "big"));
}