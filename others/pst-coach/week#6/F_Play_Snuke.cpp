    #include <iostream>
    using namespace std;
    #define ll long long
    int main()
    {
      ll n, ans = 1e9;
      cin >> n;
      for (int i = 0; i < n; i++)
      {
        ll a, p, x;
        cin >> a >> p >> x;
        if (x - a > 0)
          ans = min(ans, p);
      }
      (ans == 1e9) ? cout << -1 << endl : cout << ans << endl;
    }