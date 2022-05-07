#include <iostream>
using namespace std;
int main()
{
  int n, o, ans = 0;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; cin >> arr[i], i++)
    ;
  cin >> o;
  for (int i = 1; i <= n; i++)
  {
    if (arr[i] == o)
    {
      ans == i;
      break;
    }
  }
  cout << ans << "\n";
  if (ans != 0)
    cout << ans - 1;
  else
    cout << -1;
}