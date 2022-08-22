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
int main()
{
  o_a;
  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; cin >> arr[i], i++)
      ;
    set<int> s;
    for (int i = 1; i <= k; i++)
      s.insert(i);
    for (int i = 0; i < k; i++)
      if (s.find(arr[i]) != s.end())
        s.erase(arr[i]);
    cout << s.size() << endl;
  }
}
