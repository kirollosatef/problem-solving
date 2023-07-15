#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int x, sq_in;
  double sq_do;
  cin >> x ;
  sq_in = sqrt(x);
  sq_do = sqrt(x);
  if (sq_do == sq_in)
    cout << ((sq_in + 1) * (sq_in + 1));
  else
    cout << -1;
}
