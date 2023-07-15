#include <iostream>
#include <string>
using namespace std ;
int main ()
{
  string out , in ;
  int a ;
  cin >> in ;
  for (int i = 0; i < in.size(); i++)
  {
    out[i] = in[(in.size() - 1) - i];
  }
  for (int i = 0; i < in.size(); i++)
  {
    if (out[i] == in[i])
    a++;
  }
  if (a == in.size())
  cout << "true\n";
  else
  cout << "false\n";
}
