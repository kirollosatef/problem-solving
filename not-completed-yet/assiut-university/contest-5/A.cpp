#include <bits/stdc++.h>
using namespace std;
int main()
{
  int x, y;
  cin >> x >> y;
  cout << ((x % y) ? ((x / y) + 1) : (x / y));
}
