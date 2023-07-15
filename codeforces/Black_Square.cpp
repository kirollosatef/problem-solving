#include <iostream>
using namespace std;
int main()
{
  int arr[4], sum = 0;
  string x;
  for (int i = 0; i <= 3; cin >> arr[i], i++)
    ;
  cin >> x;
  for (int i = 0; i < x.length(); i++)
  {
    for (int j = 1; j <= 4; j++)
    {
      if ((x[i]-48) == j)
        sum += arr[j - 1];
    }
  }
  cout << sum;
}