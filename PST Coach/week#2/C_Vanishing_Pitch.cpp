#include <iostream>
using namespace std;
int main()
{
  int v, t, s, d;
  cin >> v >> t >> s >> d;
  (d < v * t || d > v * s) ? cout << "Yes" : cout << "No";
}