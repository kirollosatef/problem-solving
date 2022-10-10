#include <bits/stdc++.h>
#define v(type) vector<type>
#define sz(x) (int)(x).size()
#define all(x) x.begin(), x.end()
#define read(file) ifstream cin(file)
#define fill(x, i) memset(x, i, sizeof(x))
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;
#define pb push_back
typedef long long ll;
void rev(int k, int arr[])
{
  for (int i = 0; i < k / 2; i++)
  {
    int tmp = arr[i];
    arr[i] = arr[k - i - 1];
    arr[k - i - 1] = tmp;
  }
}
int main()
{
  o_a;
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n; i++)
  {
    if (a[i] == 0)
    {
      rev(i, a);
    }
  }
  for (int i = 0; i < n; i++)
    cout << a[i] << " ";
}
