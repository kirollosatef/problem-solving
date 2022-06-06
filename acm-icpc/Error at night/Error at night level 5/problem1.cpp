#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int a, b[4], c[4], bc[4], sum, o = 1;
  double av, past, sumpast, s, test;
  cout << "enter numper of Branchs\n";
  cin >> a;
  double arrs[a];
  for (int j = 0; j < a; j++)
  {
    for (int i = 0; i < 4; i++)
      cin >> b[i];
    for (int i = 0; i < 4; i++)
      cin >> c[i];
    for (int i = 0; i < 4; i++)
      bc[i] = b[i] * c[i];
    for (int i = 0; i < 4; i++)
      sum += bc[i];
    av = sum / 4;
    for (int i = 0; i < 4; i++)
    {
      past = pow((bc[i] - av), 2);
      sumpast += past;
    }
    s = pow((sumpast / 3), 0.5);
    arrs[j] = s;
  }
  test = arrs[0];
  for (int i = 0; i < a; i++)
  {
    if (test > arrs[i])
    {
      test = arrs[i];
      o = i + 1;
    }
  }
  cout << "Bill Gates should take care of branch numper " << o << "\n";
  return 0;
}