#include <bits/stdc++.h>
using namespace std;
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
typedef long long ll;
#define MAX 26
int A[MAX], B[MAX], C[MAX];
int main()
{
  o_a;
  string X, Y, Z;
  cin >> X >> Y >> Z;
  int i, j, N, M, U, V;
  N = M = 0, U = V = INT_MAX;
  for (i = 0; i < X.size(); i++)
    A[X[i] - 'a']++;
  for (i = 0; i < Y.size(); i++)
    B[Y[i] - 'a']++;
  for (i = 0; i < Z.size(); i++)
    C[Z[i] - 'a']++;
  for (i = 0; i < MAX; i++)
    if (B[i])
      U = min(U, A[i] / B[i]);
  for (i = 0; i <= U; i++)
  {
    for (j = 0; j < MAX; j++)
      if (C[j])
        V = min(V, (A[j] - i * B[j]) / C[j]);
    if (V + i > N + M)
      N = V, M = i;
  }
  for (i = 0; i < M; i++)
    cout << Y;
  for (i = 0; i < N; i++)
    cout << Z;
  for (i = 0; i < MAX; i++)
    if (A[i] - M * B[i] - N * C[i] > 0)
      cout << (char)(i + 'a'), A[i--]--;
  return 0;
}