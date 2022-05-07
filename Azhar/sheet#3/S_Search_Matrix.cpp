#include <iostream>
using namespace std;
int main()
{
  long x, y;
  cin >> x >> y;
  long frq[100000] = {0};
  for (long i = 0; i < x * y; i++)
  {
    long c;
    cin >> c;
    frq[c]++;
  }
  long w;
  cin >> w;
  if (frq[w] > 0)
    cout << "will not take number";
  else
    cout << "will take number";
}