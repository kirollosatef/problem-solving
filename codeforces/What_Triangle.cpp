#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int arr[n] ;
  for (int i = 0; i < n; cin >> arr[i], i++)
    ;
  if (n != 3)
  {
    cout << "not a triangle";
    return 0;
  }
  int sum = 1;
  for (int i = 0; i < 3 - 1; i++)
  {
    for (int j = i + 1; j < 3; j++)
    {
      if (arr[i] == arr[j])
      {
        sum++;
        break;
      }
    }
  }
  if (sum == 3)
  cout << "equilateral";
  else if (sum == 2)
  cout << "isosceles";
  else
  cout << "scalene";
}