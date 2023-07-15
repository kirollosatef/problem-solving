#include <iostream>
using namespace std;
int main()
{
  long long n, m;
  cin >> n >> m;
  long long arr[n];
  long long q[100000] = {0};
  for (long long i = 0; i < n; i++)
  {
    cin >> arr[i];
    q[arr[i]] = i;//!
    /*5 3
    7 5 7 6 7
    7 5 6*/
    //! NO the output
    //✔ yes the answer
  }
  long long is[m];
  for (long long i = 0; i < m; i++)
    cin >> is[i];
  for (long long i = 0; i < m - 1; i++)
  {
    if (q[is[i]] > q[is[i + 1]])
    {
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
}