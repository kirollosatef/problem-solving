#include <iostream>
using namespace std;
int main()
{
  long long n;
  cin >> n;
  unsigned long long sum1 = 0;
  unsigned long long sum2 = 0;
  for (long i = 0; i < n; i++)
  {
    long long arr;
    cin >> arr;
    sum1 += arr;
    if (sum1 > 1000)
      sum1 % 1000;
  }
  for (long i = 0; i < n; i++)
  {
    long long ooo;
    cin >> ooo;
    sum2 += ooo;
    if (sum1 > 1000)
      sum1 % 1000;
  }
  if (sum1 == sum2)
    cout << "yes";
  else
    cout << "no";
}
// for (long i = 0; i < n; i++)
// {
//   if (IS(arr, ooo, n))
//   {
//     cout << "yes";
//     return 0;
//   }
//   else
//     Permut(arr, n);
//   for (long i = 0; i < n; i++)
//     cout << arr[i] << " ";
//   cout << endl;
// }
// cout << "no";
// bool IS(long long arr1[], long long arr2[], long n)
// {
//   for (long i = 0; i < n; i++)
//     if (arr1[i] != arr2[i])
//       return 0;
//   return 1;
// }
// void Permut(long long arr[], long &n)
// {
//   for (long i = 0; i < n - 1; i++)
//     swap(arr[i], arr[i + 1]);
// }