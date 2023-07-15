#include <iostream>
using namespace std;
int main()
{
  int num_arr, orders, sum = 0, a, b;
  cin >> num_arr, orders;
  int a_arr[orders], b_arr[orders];
  int sum_arr[num_arr], arr[num_arr][sum];
  for (int i = 0; i < num_arr; i++)
  {
    cin >> sum_arr[i];
    sum = sum_arr[i];
    for (int j = 0; j < sum; j++)
    {
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i < orders; i++)
  {
    cin >> a_arr[i], b_arr[i];
  }
  for (int i = 0; i < orders; i++)
  {
    a = a_arr[i];
    b = b_arr[i];
    cout << arr[a][b] << "\n";
  }
  return 0;
}