#include <iostream>
using namespace std;
int main()
{
  int x;
  cin >> x;
  int arr[x];
  for (int i = 0; i < x; cin >> arr[i], i++)
    ;
  for (int i = x - 1; i >= 0; i--)
    cout << arr[i] << " ";
    
}