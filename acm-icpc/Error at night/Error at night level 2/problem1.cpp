#include <iostream>
using namespace std;
int main ()
{
  float h , w ;
  cout << "Enter your height \n";
  cin >> h ;
  cout << "Enter your weight \n";
  cin >>w ;
  if (h >= 160 &&  w <= 80 )
    cout << "perfect\n";
  else if (h > 160 && w > 80)
    cout << "good\n";
  else if ( h < 160 && w < 80)
  cout << "Not bad\n";
  else if ( h < 160 && w > 80)
    cout << "you need to exercise\n";
  else 
  cout << "Error:Enter the positiv number\n";
  return 0 ;
}