/*Write a program that accepts multi digit number from user and print the number in reverse order.*/
#include <iostream>
using namespace std;
int main ()
{
  string x ;
  cout << "Enter your number\n";
  cin>> x;
  for (int i = (x.size()-1); i>=0 ;i-- )
  cout << x[i];
}