#include <iostream>
using namespace std;
int main()
{
  int n, h, row=0;
  cin >> n >> h;
  int arr[n];
  for (int i = 0; i < n; cin >> arr[i], i++);
  for (int i = 0; i < n; i++)
  {
    if (arr[i] <= h)
      row++;
    else
      row += 2;
  }
  cout << row;
  return 0;
}