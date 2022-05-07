#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
const int MAX = 10;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    double r;
    // srand(time(0));
    r = (rand() % MAX) + 1;
    cout << r << "\n";
  }
}