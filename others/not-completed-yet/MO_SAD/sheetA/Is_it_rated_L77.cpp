#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int arr[n][2];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i][0] >> arr[i][1];
    if (arr[i][0] != arr[i][1])
    {
      cout << "rated";
      return 0;
    }
  }
  for (int i = 1; i < n; i++)
    if (arr[i][0] > arr[i - 1][0])
    {
      cout << "unrated";
      return 0;
    }
  cout << "maybe";
}
// #include <iostream>
// using namespace std;
// int main()
// {
//   int n, is = 0, s = 1;
//   cin >> n;
//   int after[n], before[n];
//   for (int i = 0; i < n; i++)
//   {
//     cin >> after[i] >> before[i];
//     if (after[i] != before[i])
//       is++;
//     if (after[i] > after[i - 1] && i > 0)
//       s = 0;
//   }
//   if (is > 0)
//     cout << "rated";
//   else if (s == 0)
//     cout << "unrated";
//   else
//     cout << "maybe";
// }