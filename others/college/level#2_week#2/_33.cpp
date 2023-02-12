#include <iostream>
using namespace std;
int main()
{
  int n, count = 0;
  cout << "Enter the numbers of the employee : ";
  cin >> n;
  for (int x = 1; x < n; x++)
  {
    if (n % x == 0)
    {
      count = count + 1;
    }
  }
  cout << " the numbers of ways is " << count;
  return 0;
}