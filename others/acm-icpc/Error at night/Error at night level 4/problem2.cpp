#include <iostream>
using namespace std;
int main()
{
  int x, a;
  cout <<"enter the number\n";
  cin >>x ;
  for (int i = 2; i < x; i++)
  {
    a = x % i;
  if (a == 0)
    {
      cout << "no\n";
      i = x ;
    }
  }
  if (a != 0 )
    cout << "yes\n";
  return 0;
}