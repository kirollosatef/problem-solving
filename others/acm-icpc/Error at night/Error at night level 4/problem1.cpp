#include <iostream>
using namespace std;
int main()
{
  int age, x, y;
  cout << "Enter your age \n";
  cin >> age;
  {
    if (age >= 365)
    {
      x = age % 365;
      cout << "you have " << age / 365 << " year\n";
    }
  }
  {
    if (x >= 30)
    {
      y = x % 30;
      cout << "you have " << x / 30 << " month\n";
    }
  }
  cout << "you have " << y << " day\n";
  return 0;
}