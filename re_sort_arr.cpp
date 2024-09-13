#include <bits/stdc++.h>
#define vec(type) vector<type>
#define sz(x) (int)(x).size()
#define all(x) x.begin(), x.end()
#define read(file) ifstream cin(file)
#define fill(x, i) memset(x, i, sizeof(x))
#define lp(i, srt, end, dir) \
  for (int i = srt; (dir ? (i < end) : (i > end)); (dir ? i++ : i--))
#define lpe(i, srt, end, dir) \
  for (int i = srt; (dir ? (i <= end) : (i >= end)); (dir ? i++ : i--))
#define cinarr(n, arr) for (int i = 0; i < n; cin >> arr[i], i++)
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define mp make_pair
#define endl "\n"
#define ins insert
#define F first
#define S second
#define whilet \
  int t;       \
  cin >> t;    \
  while (t--)
using namespace std;
typedef long long ll;

int main()
{
  o_a;
  // you have a array [1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9]

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  int temp;
  for (int i = 0; i <= 4; i++)
  {
    temp = arr[i];
    arr[i] = arr[8 - i];
    arr[8 - i] = temp;
  }

  for (int n : arr)
  {
    cout << n << " ";
  }
}