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
// a heap is a complete binary tree
// it satisfay tow properties:
// 1- {minHeab: the parent is smaller than the children }
// 2- {maxHeab: the parent is bigger than the children }
// 3- all levels are full except the last one

// as heap is a complete binary tree then height = log(n)
// so the time complexity of insert and delete is O(log(n))
// the heap is healping us to find the min O(1) time the i delete it i will find the next min
// heap insert : heapifyUp ? if the child is smaller than the parent then swap them
// heap delete : heapifyDown ? if the parent is bigger than the children then swap them
// bealding a heap :
// 1 : if i will insert n elements then the time complexity will be O(nlog(n))
// 2 : build (n + 1) / 2 elements then the time complexity will be O(n): get the half of the elements and heapify them then the rest of the elements will be heapify in the insert function
int main()
{
  o_a;
}
