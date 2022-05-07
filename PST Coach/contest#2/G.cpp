#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int frq[100000] = {0};
    bool ok = 0;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      frq[arr[i]]++;
      if (frq[arr[i]] >= 3)
        ok = 1;
      if (frq[arr[i]] == 2 && arr[i] != arr[i - 1])
        ok = 1;
    }
    (n == 1 || ok) ? cout << "YES\n" : cout << "NO\n";
  }
}