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
    long long n;
    cin >> n;
    long long sum = 0;
    for (long long i = 0; i < n; i++)
    {
      long long x;
      cin >> x;
      sum += x;
    }
    long long gig = 0;
    if (sum == n)
      gig = 0;
    else if (sum < n)
      gig = 1;
    else if (sum > n)
      gig = sum - n;
    cout << gig << endl;
  }
}