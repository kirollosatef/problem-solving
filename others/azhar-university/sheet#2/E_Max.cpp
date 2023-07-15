#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int arr[n], maax;
  for (int i = 0; i < n; cin >> arr[i], i++);
  maax = arr[0];
  for (int i = 1; i < n; i++)
    maax = max(maax, arr[i]);
  cout << maax << endl;
}