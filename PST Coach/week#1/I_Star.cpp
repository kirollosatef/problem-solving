#include <iostream>
using namespace std;
int main(){
  int x;cin >> x;
  (x % 100 == 0) ? cout << 100 : cout << 100 - x % 100;
}