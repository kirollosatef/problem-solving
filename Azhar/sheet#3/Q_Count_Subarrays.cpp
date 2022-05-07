#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, ans = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; cin >> arr[i], i++)
      ;
    for (int i = 0; i < n; i++)
    {
      ans++;
      for (int j = i + 1; j < n; j++)
      {
        if (arr[j - 1] > arr[j])
          break;
        ans++;
      }
    }
    cout << ans << endl;
  }
}