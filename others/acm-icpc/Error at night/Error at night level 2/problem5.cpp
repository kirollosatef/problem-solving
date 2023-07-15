#include <iostream>
using namespace std;
int main()
{
  int xex[10], sum, mul=1;
  float x ;
  cout << "Enter 10 numbers\n";
  for (int i = 0; i < 10; i++)
  {
    cin >> xex[i];
  }
  for (int i = 0; i < 10; i++)
  {
    sum = sum + xex[i];
  }
  for (int i = 0; i < 10; i++)
  {
    mul = mul * xex[i];
  }
  cout << "the sum = " << sum << "\n";
  cout << "the average = " << sum / 10 << "\n";
  cout << "the multi = " << mul << "\n";
  return 0;
}