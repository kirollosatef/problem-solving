#include <iostream> 
#include <vector>
using namespace std;
int main()
{
  int x;
  cin >> x;
  vector<int> s;
  for (int i = 1; i <= x; i++)
  {
    if (x % i == 0)
      s.push_back(i);
  }
  cout << s.size() << endl;
  for (int i = 0; i < s.size(); i++)
    cout << s[i] << " ";
}