//! O(N^2) and we need  O(N)
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main()
// {
//   int x;
//   cin >> x;
//   int arr[x];
//   for (int i = 0; i < x; cin >> arr[i], i++)
//     ;
//   int left = 0, right = 0, miin;
//   for (int i = 0; i < x; i++)
//   {
//     for (int j = 0; j < i + 1; j++)
//       left += arr[j];
//     for (int j = i + 1; j < x; j++)
//       right += arr[j];
//     miin = min(miin, abs(left - right));
//     left = right = 0;
//   }
//   cout << miin << endl;
// }
//todo => here i will solve it in O(N)
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int x;
  cin >> x;
  int arr[x];
  for (int i = 0; i < x; cin >> arr[i], i++)
    ;
  int left = arr[0], right = 0;
  for (int i = 1; i < x; i++)
    right += arr[i];
  int list = abs(left - right);
  for (int i = 1; i < x; i++)
  {
    left += arr[i];
    right -= arr[i];
    list = min(list, abs(left - right));
  }
  cout << list << endl;
}