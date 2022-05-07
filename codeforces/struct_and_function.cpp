#include <iostream>
#include <string>
using namespace std;
struct window
{
  float length;
  float width;
};
window collect(window es1, window es2);
int main()
{
  window x, y, z;
  cout << "enter x length & width\n";
  cin >> x.length >> x.width;
  cout << "enter y length & width\n";
  cin >> y.length >> y.width;
  // z = collect(x, y);
  // cout << z.length << "       " << z.width <<"\n";
  cout << "collection width => " << collect(x, y).width << "\n"
      << "collection length => " << collect(x, y).length << "\n";
  return 0;
}
window collect(window es1, window es2)
{
  window sum;
  sum.length = es1.length + es2.length;
  sum.width = es1.width + es2.width;
  return sum;
} 