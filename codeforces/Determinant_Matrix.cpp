#include <iostream>
using namespace std;
int main()
{
  int arr[2][2];
  cin >> arr[0][0] >> arr[0][1] >> arr[1][0] >> arr[1][1];
  cout << ((arr[0][0] * arr[1][1]) - (arr[0][1] * arr[1][0]));
  return 0;
}