//Q1)
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int a, dep, sum, o = 1;
  double av, past, sumpast, s, test;
  cout << "enter numper of Branchs\n";
  cin >> a;
  cout << "the Number of employee departments \n";
  cin >> dep;
  double arrs[a];
  int b[dep], c[dep], bc[dep];
  for (int j = 0; j < a; j++)
  {
    cout << "Enter the departmental salary in the branch number " << j + 1 << "\n";
    for (int i = 0; i < dep; i++)
      cin >> b[i];
    cout << "Number of employees, respectively\n";
    for (int i = 0; i < dep; i++)
      cin >> c[i];
    for (int i = 0; i < dep; i++)
      bc[i] = b[i] * c[i];
    for (int i = 0; i < dep; i++)
      sum += bc[i];
    av = sum / dep;
    for (int i = 0; i < dep; i++)
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
  cout << "Bill Gates should take care of branch number \"" << o << "\"\n";
  return 0;
}