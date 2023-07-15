/*2)	Write a program that accepts 2 integers N and M numbers from the user and calculate the sum of multiples of M below N.*/
#include <iostream>
using namespace std;
int main()
{
  int n, m, y, i = 0, x = 1, sum;
  cout << "Enter N and M \n";
  cin >> n >> m;
  while (i == 0)
  {
    y = m * x;
    sum = sum + y;
    if (sum >= n)
    {
      cout << sum - y << "\n";
      i = 1;
    }
    else
    {
      i = 0;
    }
    x = x + 1;
  }
}