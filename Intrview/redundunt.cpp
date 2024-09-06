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
  int k = 0, index=0;
int arr[201] = 0;
int nums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
for (int i = 0 ; i < nums.size() ; i++) {
nums[i] += 100;
if(arr[nums[i]] !== 1)
{
k++;
arr[nums[i]]++;
}
}
for(int i = 0 ; i <= 201; i++)
{
if(arr[i] == 1)
{
nums[index] = i -100;
index++;
}
}
cout << k << “,” << endl;
for (int i = 0; i < nums.size() ; i++)
{
cout << nums[i] << “ “;
}

}