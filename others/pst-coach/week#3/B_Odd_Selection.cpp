#include <iostream>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    int n, x, odd = 0;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[n];
      if (arr[n] % 2 == 1)
        odd++;
    }
    if (odd == 0 || (x == n && odd % 2 == 0) || (odd == n && x % 2 == 0))
      cout << "No\n";
    else
      cout << "Yes\n";
  }
}
