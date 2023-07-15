#include <iostream>
using namespace std;
void OoO(int &x , int &y)
{
  int t = x ;
  x = y ;
  y = t ;
}
int main()
{
  int n, d, count = 0;
  cin >> n >> d;
  int arr[n];
  for (int i = 0; i < n; cin >> arr[i], i++);
  for (int i = n - 1 ; i >= 0 ; i--)
  {
    for (int j = i - 1 ; j >= 0 ; j--)
    {
      if (arr[i] < arr[j])
        OoO(arr[i] , arr[j]);
    }
  }
  for (int i = 0 ; i < n ; i++)
  {
    if (arr[i+1] - arr[i] <= d)
      count ++;
  }
  cout << count * 2;
}