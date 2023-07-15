#include <iostream>
using namespace std ;
int sum (int , int ,int );
float avaredg (int ,int ,int );
int main ()
{
int x ,y ,z ;
cout << "Enter three numbers \n";
cin >> x>>y>>z ;
cout << "the sum = " << sum (x,y,z)<< "\n";
cout << "avaredg = "<< avaredg(x, y ,z ) << "\n";
}
int sum (int n1 , int n2 , int n3)
{
  return n1 + n2 + n3 ;
}
float avaredg (int n1 ,int n2 , int n3)
{
  return sum (n1 , n2 , n3 )/3;
}