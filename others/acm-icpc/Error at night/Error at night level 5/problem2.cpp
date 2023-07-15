#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int a, b;
  float  lp = 3.14159 , sum ;
  cout << "enter f1 for dog 1\n";
  cin >> a;
  cout << "enter f2 for dog 2  \n";
  cin >> b;
  if (a > b)
    cout << "dog 1 able to pull the cube \n";
  else if (a < b)
    cout << "dog 2 able to pull the cube \n";
  else if (a = b)
    cout << "move in middle \n";
  sum = pow ((pow (a , 2)+pow (b,2 ) -  2 * a *b ) , 0.5); 
  cout << sum ; 
  return 0 ; 
}