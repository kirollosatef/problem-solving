#include <iostream>
using namespace std;
int main()
{
  int counter = 1, gread = 0, sum = 0;
  while (counter <= 6)
  {
    cout << "enter the grades \n";
    cin >> gread;
    sum += gread;
    counter++;
  }
  /*do 
  {
    cout << "enter the grades \n";
    cin >> gread ;
    sum +=gread;
    counter++;
  }
  while (counter <= 6);*/
  /*for (int x =1 ; x<=6; x++)
  {
    cout << "enter the grades \n";
    cin >> gread;
    sum += gread;
  }*/
  cout << "the avaredg = " << sum / 6 << "\n";
  return 0;
}