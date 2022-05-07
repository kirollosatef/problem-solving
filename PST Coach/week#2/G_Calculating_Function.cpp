#include <iostream>
using namespace std;
int main()
{
  long long x;
  cin >> x;
  (x % 2) ? cout << "-" << ++x / 2 : cout << x / 2;
}