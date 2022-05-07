#include <iostream>
#include <cmath>
using namespace std;
int cd(int, int);
int main()
{
  int m, n, t;
  cout << "Enter tow number\n";
  cin >> m >> n;
  if (m > n)
  {
    while (n != 0)
    {
      t = m % n;
      m = n;
      n = t;
    }
    cout << "G.C.D = " << m;
  }
  else if (n > m)
  {
    while (m != 0)
    {
      t = n % m;
      n = m;
      m = t;
    }
    cout << "G.C.D = " << n;
  }
  else if (n = m)
    cout << "G.C.D = " << m;
  return 0;
}
