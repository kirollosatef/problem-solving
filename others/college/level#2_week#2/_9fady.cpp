#include <iostream>
using namespace std;
#include <string >
int main()
{
  int str, x, y, a1;
  cout << "Enter your number : ";
  cin >> str;
  x = (str % 10);
  y = ((str - (str % 10)) / 10);
  a1 = y + x;
  int a2, x2, y2;
  x2 = (a1 % 10);
  y2 = ((a1 - a1 % 10) / 10);
  a2 = y2 + x2;
  int a3, x3, y3;
  x3 = (a2 % 10);
  y3 = ((a2 - a2 % 10) / 10);
  a3 = y3 + x3;
  int a4, x4, y4;
  x4 = (a3 % 10);
  y4 = ((a3 - a3 % 10) / 10);
  a4 = y4 + x4;
  int a5, x5, y5;
  x5 = (a4 % 10);
  y5 = ((a4 - a4 % 10) / 10);
  a5 = y5 + x5;
  int a6, x6, y6;
  x6 = (a5 % 10);
  y6 = ((a5 - a5 % 10) / 10);
  a6 = y6 + x6;
  int a7, x7, y7;
  x7 = (a6 % 10);
  y7 = ((a6 - a6 % 10) / 10);
  a7 = y7 + x7;
  int a8, x8, y8;
  x8 = (a7 % 10);
  y8 = ((a7 - a7 % 10) / 10);
  a8 = y8 + x8;
  cout << "your number is ";
  cout << a8;
}