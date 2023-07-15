#include <iostream>
using namespace std;
int main()
{
  int n, ans = 0, po = 0;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; cin >> arr[i], i++)
    ;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == -1)
    {
      if (po > 0)
        po--;
      else
        ans++;
    }
    else if (arr[i] > 0)
      po += arr[i];
  }
  cout << ans;
}