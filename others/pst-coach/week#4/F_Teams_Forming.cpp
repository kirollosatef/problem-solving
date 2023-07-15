  #include <bits/stdc++.h>
  using namespace std;
  #define pd push_back
  #define sz(v) (v).size()
  typedef long long ll;
  void faster()
  {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  }
  int main()
  {
    faster();
    int n, ans = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; cin >> arr[i], i++)
      ;
    sort(arr, arr + n);
    for (int i = n - 1; i > 0; i -= 2)
      ans += (arr[i] - arr[i - 1]);
    cout << ans;
  }