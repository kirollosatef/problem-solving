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
int main()
{
  o_a;
  int arr[] = {6, 8, 4, 2}, n;
  cin >> n;
  (n == 0) ? cout << 1 : cout << arr[n % 4];
}