#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  long long x ;
  cin >> x ;
  int a = log2(x);
  double b = log2(x);
  (b > a) ? cout << "NO" : cout << "YES";
}