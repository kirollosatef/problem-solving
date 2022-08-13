#include <bits/stdc++.h>
using namespace std;
const int N = 20000000;
bool isprime[N + 1];
int prime[N / 3], pcnt = 0, twprime[N / 9], twcnt = 1;
void eulersieve(void)
{
  memset(isprime, true, sizeof(isprime));
  isprime[0] = isprime[1] = false;
  for (int i = 2; i <= N; i++)
  {
    if (isprime[i])
      prime[pcnt++] = i;
    for (int j = 0; j < pcnt && i * prime[j] <= N; j++)
    {
      isprime[i * prime[j]] = false;
      if (i % prime[j] == 0)
        break;
    }
  }
  prime[pcnt] = 0;
  for (int i = 0; i < pcnt; i++)
    if (prime[i] + 2 == prime[i + 1])
      twprime[twcnt++] = prime[i];
}
int main()
{
  eulersieve();
  int n;
  while (~scanf("%d", &n))
    printf("(%d, %d)\n", twprime[n], twprime[n] + 2);
  return 0;
}
// bool isPrime(int n)
// {
//   if (n == 0 || n == 1)
//   {
//     return 0;
//   }
//   for (int i = 2; i <= sqrt(n); ++i)
//   {
//     if (n % i == 0)
//     {
//       return 0;
//     }
//   }
//   return 1;
// }
// int main()
// {
//   o_a;
//   int n, c = 0;
//   while (scanf("%d", &n) != EOF)
//   {
//     c = 0;
//     for (int i = 3;; i++)
//     {
//       if (isPrime(i) && isPrime(i + 2))
//       {
//         c++;
//         if (c == n)
//         {
//           cout << "(" << i << ", " << i + 2 << ")\n";
//           break;
//         }
//       }
//     }
//   }
// }
