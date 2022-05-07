#include <bits/stdc++.h>
using namespace std;
int main()
{
  string y, x;
  getline(cin, x);
  y = x;
  reverse(y.begin(), y.end());
  while (y[0] == '0')
    y.erase(0, 1);
  cout << y << endl;
  (y == x) ? cout << "YES" : cout << "NO";
}