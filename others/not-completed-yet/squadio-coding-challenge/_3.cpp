// Minimum swaps You are given the following :
// • An Integer N
// • A binary string S of length NxN N is always even and string S has an equal number of 0's and 1's.
// You are allowed to swap any two elements S[i] and S[j] (0 ≤i ‡ j < NxN) of string S.
// Task Determine the minimum number of swaps required to be done on string S such that
// the following conditions hold true for the entire string :
// • If (i+1) mod N - (i) mod N = 1, then (S[i+1] + S[i]) = 1 for (0<i<N×N−1). If i+N <Nx N, then (S[i+N] + S[i]) = 1.
#include <bits/stdc++.h>
using namespace std;

int Solve(int N, string s)
{
  int n = s.size();
  int o = 0;
  int z = 0;
  for (auto x : s)
  {
    if (x == '1')
    {
      o++;
    }
    else
    {
      z++;
    }
  }
  if (n % 2 == 1 && abs(o - z) != 1 || n % 2 == 0 && o != z)
  {
    return -1;
  }
  int a = 0;
  int b = 0;
  int num = n / 2 + n % 2;
  for (int i = 0; i < n; i += 2)
  {
    if (s[i] == '1')
    {
      a++;
    }
    else
    {
      b++;
    }
  }
  if (n % 2)
  {
    if (o > z)
    {
      return b;
    }
    return a;
  }
  else
  {
    if (b > a)
    {
      swap(a, b);
    }
    return num - a;
  }
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int T;
  cin >> T;
  for (int t_i = 0; t_i < T; t_i++)
  {
    int N;
    cin >> N;
    string S;
    cin >> S;
    int out_;
    out_ = Solve(N, S);
    cout << out_;
    cout << "\n";
  }
}
