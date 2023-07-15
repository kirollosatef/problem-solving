#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int k, n, w;
  cin >> k >> n >> w;
  w = (pow(w, 2) + w) / 2;
  (n >= (w * k)) ? cout << 0 : cout << (w * k) - n;
}