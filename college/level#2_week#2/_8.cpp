#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  string str[t] = {"oo"};
  int sum[t] = {0};
  for (int tt = 0; tt < t; tt++)
  {
    int n;
    cin >> n;
    int arr[n], ans[n] = {0};
    for (int i = 0; i < n; cin >> arr[i], i++)
      ;
    for (int i = n - 1; i >= 0; i--)
    {
      for (int j = i - 1; j >= 0; j--)
      {
        if (arr[i] < arr[j])
        {
          ans[j]++;
          sum[tt]++;
        }
      }
    }
    for (int i = 0; i < n; i++)
    {
      if (ans[i] > 2)
        str[tt] = "Too chaotic";
    }
  }
  for (int i = 0; i < t ; i++)
  {
    if (str[i] == "Too chaotic")
      cout << "Too chaotic" << endl;
    else
      cout << sum[i] << endl;
  }
}