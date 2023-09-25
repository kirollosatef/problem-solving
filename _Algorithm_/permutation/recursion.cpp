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
void generatePermutations(vector<int> &elements, int currentIndex)
{
  if (currentIndex == elements.size())
  {
    for (int element : elements)
    {
      cout << element << " ";
    }
    cout << endl;
    return;
  }

  for (int i = currentIndex; i < elements.size(); ++i)
  {
    swap(elements[currentIndex], elements[i]);
    generatePermutations(elements, currentIndex + 1);
    swap(elements[currentIndex], elements[i]); // Backtrack
  }
}

int main()
{
  o_a;

  vector<int> elements = {1, 2, 3}; // Replace this with your set of elements

  generatePermutations(elements, 0);

  return 0;
}
