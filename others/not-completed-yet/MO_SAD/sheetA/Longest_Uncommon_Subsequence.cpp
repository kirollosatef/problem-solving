#include <iostream>
using namespace std;int main(){string x, y;cin >> x >> y;(x == y) ? cout << -1 : cout << max(x.size(), y.size());}