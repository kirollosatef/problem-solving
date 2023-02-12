#include <iostream>
using namespace std;
int main()
{
  int n, mx, x;
  cin >> n;
  int frq[n + 1] = {0};
  mx = n;
  while (n--)
  {
    cin >> x;
    frq[x] = 1;
    while (frq[mx])
    {
      cout << mx << " ";
      mx--;
    }
    cout << "\n";
  }
  return 0;
}
// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cin >> n;
//   int arr[n];
//   int frq[n + 1] = {0};
//   int max = n, l = 1;
//   for (int i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//   }
//   for (int i = 0; i < n; i++)
//   {
//     if (arr[i] == max)
//     {
//       cout << max << " ";
//       max--;
//       while (frq[max] > 0)
//       {
//         cout << max << " ";
//         max--;
//       }
//       cout << "\n";
//     }
//     else
//     {
//       frq[arr[i]]++;
//       cout << "\n";
//     }
//   }
// }