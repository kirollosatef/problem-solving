#include <iostream>
using namespace std;
int main()
{
  int n, m, ans;
  cin >> n >> m;
  int arr[n * m], x, y;
  for (int i = n * m - 1; i >= 0; cin >> arr[i], i--)
    ;
  cin >> x >> y;
  cout << arr[((y - 1) * m + (x - 1))];
}