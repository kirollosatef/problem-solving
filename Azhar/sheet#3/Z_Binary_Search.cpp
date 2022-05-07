// #include <bits/stdc++.h>
// using namespace std;
// void Swap(int &x, int &y)
// {
//   int temp = x;
//   x = y;
//   y = temp;
// }
// void Sort(int arr[], int n)
// {
//   for (int i = n - 1; i >= 0; i--)
//     for (int j = i - 1; j >= 0; j--)
//       if (arr[i] < arr[j])
//         Swap(arr[i], arr[j]);
// }
// bool BinarySerch(int arr[], int n, int x)
// {
//   bool s;
//   int l = 0, r = n - 1, m;
//   while (r >= l)
//   {
//     m = (l + r) / 2;
//     if (arr[m] == x)
//       return 1;
//     else if (arr[m] < x)
//       l = m + 1;
//     else
//       r = m - 1;
//   }
//   return 0;
// }
// int main()
// {
//   int n, k;
//   cin >> n >> k;
//   int arr[n];
//   for (int i = 0; i < n; cin >> arr[i], i++)
//     ;
//   Sort(arr, n);
//   while (k--)
//   {
//     int x;
//     cin >> x;
//     BinarySerch(arr, n, x) ? cout << "found\n" : cout << "not found\n";
//   }
// }
//! Runtime error
#include <iostream>
using namespace std;
int arr[100];
int main()
{
  int n, t;
  cin >> n >> t;
  for (int i = 0; i < n; i++)
  {
    int num;
    cin >> num;
    arr[num]++;
  }
  while (t--)
  {
    int need;
    cin >> need;
    (arr[need] > 0) ? cout << "found\n" : cout << "not found\n";
  }
}