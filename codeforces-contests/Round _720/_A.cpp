  #include <bits/stdc++.h>
  using namespace std;
  int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
  int t;
  cin >> t;
  string str[t];
  int x[t] = {0}, y[t] = {0}, z[t] = {0};
  for (int tt = 0; tt < t; tt++)
  {
    int a, b;
    cin >> a >> b;
    for (int k = 0; k < 1;)
    {
      x[tt] = x[tt] + a * b;
      for (int i = 1; i <= x[tt]; i++)
      {
        for (int j = i + 1; j <= x[tt]; j++)
        {
          if (((a * i) + (a * j)) == x[tt])
          {
            y[tt] = a * i;
            z[tt] = a * j;
            k++;
          }
        }
      }
    }
    if (y[tt] == 0 && z[tt] == 0)
      str[tt] = "NO";
    else
      str[tt] = "YES";
  }
  for (int i = 0; i < t; i++)
  {
    if (str[i] == "NO")
    {
      cout << "NO" << endl;
    }
    else
    {
      cout << "YES" << endl;
      cout << x[i] << " " << y[i] << " " << z[i] << endl;
    }
  }
}