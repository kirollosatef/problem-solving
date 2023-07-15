#include <iostream>
using namespace std;
int main()
{
  int x ;
  int a = 0, b = 0;
  int arra[a], arrb[b] , arrx[b];
  cout << "enter numper of arr 1 \n";
  cin >> a;
  cout << "enter arr 1 \n";
  for (int i = 0; i < a; i++)
    cin >> arra[i];
  cout << "enter numper of arr 2 \n";
  cin >> b;
  cout << "enter arr 2 \n";
  for (int i = 0; i < b; i++)
    cin >> arrb[i];
  for (int i = 0 ; i < a ; i ++)
  {
    x = arra[i] ;
    for (int g = 0; g < b ; g++)
    {
        if (arrb[g]==x)
        arrx[g] = x;
    }
  }
  for (int i = 0;i++;)
  cout << arrx[i]<<" ";
  return 0;
}