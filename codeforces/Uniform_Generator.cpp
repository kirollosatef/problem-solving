#include <bits/stdc++.h>
#define pb push_back
#define sz(v) (v).size()
#define vi vector<int>
#define vs vector<string>
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;
typedef long long ll;
int sum(int arr[], int n)
{
  int x = 0;
  for (int i = 0; i < n; i++)
    x += arr[i];
  return x;
}
int main()
{
  o_a;
  int step, mod;
  while (cin >> step >> mod)
  {
    int indx = 0, ok = 1;
    int arr[mod] = {0};
    for (int i = 0; i < mod; i++)
    {
      arr[indx]++;
      if (arr[indx] > 1)
      {
        ok = 0;
        break;
      }
      indx += step;
      indx %= mod;
    }
    cout << setw(10) << step << setw(10) << mod << "     ";
    (ok && sum(arr, mod) == mod) ? cout << "Good Choice" << endl : cout << "Bad Choice" << endl;
  }
}