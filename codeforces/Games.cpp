#include <iostream>
using namespace std;
int main()
{
  int n, ans = 0;
  cin >> n;
  int a[n], b[n];
  for (int i = 0; i < n; cin >> a[i] >> b[i], i++);
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      if (a[i] == b[j])
        ans++;
  cout << ans;
}
// int main()
// {
//   int n, ans = 0, x;
//   cin >> n;
//   x = n * 2;
//   int arr[x];
//   for (int i = 0; i < x; cin >> arr[i], i++)
//     ;
//   for (int i = 0; i < x; i++)
//   {
//     if ((i + 1) % 2 != 0)
//     {
//       for (int j = i + 3; j < x; j += 2)
//         if (arr[i] == arr[j])
//           ans++;
//     }
//     else
//     {
//       for (int j = i + 1; j < x; j += 2)
//         if (arr[i] == arr[j])
//           ans++;
//     }
//   }
//   cout << ans;
// }