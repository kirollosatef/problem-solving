//sheet_1
//3 => Conditional Statements
#include <iostream>
using namespace std;
int main()
{
  int i;
  if (i == 0)
    cout << "zero";
  else if (i == 1)
    cout << "one";
  else if (i == 2)
    cout << "two";
  else if (i == 3)
    cout << "three";
  else if (i == 4)
    cout << "four";
  else if (i == 5)
    cout << "five";
  else if (i == 6)
    cout << "six";
  else if (i == 7)
    cout << "seven";
  else if (i == 8)
    cout << "eight";
  else if (i == 9)
    cout << "nine";
  else
    cout << "Greater than 9";
}
// another solution
#include <iostream>
using namespace std;
int main()
{
  int x ;
  cin >> x;
  string num[]={"zero","one", "two", "three", "four", "five","six", "seven", "eight", "nine"};
  if (x <= 9)
  {
    cout << num[x];
  }
  else
  cout << "Greater than 9";
}