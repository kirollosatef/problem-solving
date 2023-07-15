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
/**
 * Classes and Objects:
 *    A class is a blueprint for creating objects, while an object is an instance of a class.
 *    Classes define the properties (attributes) and behaviors (methods) that objects of that class will have.
 */
class Rectangle
{
private:
  int length;
  int width;

public:
  Rectangle(int l, int w)
  {
    length = l;
    width = w;
  }
  int calculateArea()
  {
    return length * width;
  }
};

int main()
{
  o_a;
  Rectangle rect(5, 3);
  int area = rect.calculateArea();
  cout << "Area: " << area << endl;
  return 0;
}