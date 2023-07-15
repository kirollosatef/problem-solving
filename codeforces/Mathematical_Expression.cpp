#include <iostream>
using namespace std;
int main()
{
  int x, y, z;
  char op, eq;
  cin >> x >> op >> y >> eq >> z;
  if (op == '+' && (x + y) == z)
    cout << "Yes";
  else if (op == '-' && (x - y) == z)
    cout << "Yes";
  else if (op == '*' && (x * y) == z)
    cout << "Yes";
  else if (op == '+' && (x + y) != z)
    cout << x + y;
  else if (op == '-' && (x - y) != z)
    cout << x - y;
  else if (op == '*' && (x * y) != z)
    cout << x * y;
}