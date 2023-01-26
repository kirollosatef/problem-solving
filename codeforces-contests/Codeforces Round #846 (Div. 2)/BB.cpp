#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int findMaxGCD(int arr[], int n, int k)
{
  int maxGCD = 0;
  for (int i = 0; i < (1 << n); i++)
  {
    int cnt = 0, sum = 0;
    for (int j = 0; j < n; j++)
    {
      if (i & (1 << j))
      {
        cnt++;
        sum += arr[j];
      }
    }
    if (cnt == k)
    {
      if (maxGCD == 0)
        maxGCD = sum;
      else
        maxGCD = gcd(maxGCD, sum);
    }
  }
  return maxGCD;
}

int main()
{
  int arr[] = {1, 2, 1, 1, 1, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  int k = 3;
  cout << "Maximum GCD of all sums of subsegments: " << findMaxGCD(arr, n, k) << endl;
  return 0;
}
