#include <bits/stdc++.h>
#define pb push_back
#define sz(v) (v).size()
#define vi vector<int>
#define vs vector<string>
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;
typedef long long ll;
class Solution
{
private:
  int row, col;

public:
  int minTotalDistance(vector<vi> &grid)
  {
    cin >> row >> col;
    vi ver;
    vi hor;
    for (int i = 0; i < row; i++)
      for (int j = 0; j < col; j++)
        if (grid[i][j] == 1)
        {
          ver.pb(i);
          hor.pb(j);
        }
    sort(ver.begin(), ver.end());
    sort(hor.begin(), hor.end());
    int mid = sz(ver) / 2;
    int x = ver[mid], y = ver[mid];
    int min_distance = 0;
    for (int i = 0; i < row; i++)
      for (int j = 0; j < col; j++)
        if (grid[i][j] == 1)
          min_distance += abs(x - i) + abs(y - j);
    return min_distance;
  }
};
int main()
{
  o_a;
}