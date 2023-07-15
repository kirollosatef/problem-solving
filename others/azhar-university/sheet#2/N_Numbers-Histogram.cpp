#include <iostream>
using namespace std;
int main()
{
  char ch;
  cin >> ch;
  int n, x;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> x;
    for (int j = 0; j < x; j++)
      cout << ch;
    cout << endl;
  }
}