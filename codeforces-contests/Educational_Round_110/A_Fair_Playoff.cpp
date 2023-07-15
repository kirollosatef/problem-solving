#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    int arr[4], max = 0, max_1 = 0;
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    for (int i = 0; i < 4; i++)
      if (arr[i] > max)
        max = arr[i];
    for (int i = 0; i < 4; i++)
      if (arr[i] > max_1 && arr[i] != max)
        max_1 = arr[i];
    if ((arr[0] == max || arr[1] == max) && (arr[2] == max_1 || arr[3] == max_1))
      cout << "YES" << endl;
    else if ((arr[0] == max_1 || arr[1] == max_1) && (arr[2] == max || arr[3] == max))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}