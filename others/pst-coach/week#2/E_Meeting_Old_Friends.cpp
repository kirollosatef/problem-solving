  #include <iostream>
  using namespace std;
  int main()
  {
    long long l1, r1, l2, r2, k, ans = 0;
    cin >> l1 >> r1 >> l2 >> r2 >> k;
    ans = min(r1, r2) - max(l1, l2) + 1;
    (k >= max(l1, l2) && k <= min(r1, r2)) ? ans-- : ans;
    cout << max(ans, 0LL);
  }