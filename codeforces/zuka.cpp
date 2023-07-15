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
void solve(int arr[], int x)
{
  for (int i = 0; i < x - 1; i++)
  {
    int temp = arr[i];
    arr[i] = arr[i + 1];
    arr[i + 1] = temp;
  }
}
int main()
{
  o_a;
  int x, y;
  cin >> x >> y;
  int arr[x];
  for (int i = 0; i < x; i++)
    cin >> arr[i];
  solve(arr, y);
  for (int i = 0; i < x; i++)
    cout << arr[i] << " ";
}