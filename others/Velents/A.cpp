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

int minTime(vector<int> arr)
{
  // the array have 4 elements 1 mean numberof the road ,  2 mean tow_wheeler , 3 mean three_wheeler , 4 mean four_wheeler
  // in one second can croos (3 form 2 wheeler) or (1 form 2 wheeler and 1 form 3 wheeler) or (1 form 2 wheeler and 1 form 4 wheeler) or less than that
  // i need to make a function that take the array and return the minimum time to cross the road
  // example : [2,1,1,1] => 2 || [2,3,0,0] => 1 || [2,0,1,0] => 1 || [2,0,0,1] => 1

  int time = 0;
  int two_wheeler = arr[1];
  int three_wheeler = arr[2];
  int four_wheeler = arr[3];
  while (two_wheeler > 0 || three_wheeler > 0 || four_wheeler > 0)
  {
    if (two_wheeler >= 3)
    {
      time++;
      two_wheeler -= 3;
    }
    else if (two_wheeler == 2 && three_wheeler > 0)
    {
      time++;
      two_wheeler -= 2;
      three_wheeler--;
    }
    else if (two_wheeler == 2 && four_wheeler > 0)
    {
      time++;
      two_wheeler -= 2;
      four_wheeler--;
    }
    else if (two_wheeler == 1 && three_wheeler > 0)
    {
      time++;
      two_wheeler -= 1;
      three_wheeler--;
    }
    else if (two_wheeler == 1 && four_wheeler > 0)
    {
      time++;
      two_wheeler -= 1;
      four_wheeler--;
    }
    else if (two_wheeler == 1 && three_wheeler == 0 && four_wheeler == 0)
    {
      time++;
      two_wheeler -= 1;
    }
    else if (two_wheeler == 0 && three_wheeler > 0)
    {
      time++;
      three_wheeler--;
    }
    else if (two_wheeler == 0 && four_wheeler > 0)
    {
      time++;
      four_wheeler--;
    }
  }
  return time;
}

int main()
{
  o_a;
  int n;
  cin >> n;
  vector<vector<int>> v(n, vector<int>(4));
  for (int i = 0; i < n; i++)
    cin >> v[i][0] >> v[i][1] >> v[i][2] >> v[i][3];
  // i need to print the minimum time to cross the road for each array
  // like if road 1 -> 2 sec & 2 -> 1 sec & 3 -> 5
  // i need to sort all rad reom the smallest to the largest
  // and print like this [[2,0] , [1,1] , [3,3]] 2 wait 0 sec , 1 wait 1 sec , 3 wait 3 sec
  vector<pair<int, int>> ans;
  for (int i = 0; i < n; i++)
  {
    ans.push_back({i + 1, minTime(v[i])});
  }
  sort(ans.begin(), ans.end(), [](pair<int, int> a, pair<int, int> b)
       { return a.second < b.second; });
  for (int i = 0; i < n; i++)
    cout << ans[i].first << " " << ans[i].second << endl;
}