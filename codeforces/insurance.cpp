/*Petya loves football very much. One day, as he was watching a football match, he was writing the players' current positions on a piece of paper. To simplify the situation he depicted it as a string consisting of zeroes and ones. A zero corresponds to players of one team; a one corresponds to players of another team. If there are at least 7 players of some team standing one after another, then the situation is considered dangerous. For example, the situation 00100110111111101 is dangerous and 11110111011101 is not. You are given the current situation. Determine whether it is dangerous or not.

Input
The first input line contains a non-empty string consisting of characters "0" and "1", which represents players. The length of the string does not exceed 100 characters. There's at least one player from each team present on the field.

Output
Print "YES" if the situation is dangerous. Otherwise, print "NO".*/
#include <iostream>
using namespace std;
int main()
{
  string x;
  cin >> x;
  for (int i = 0; i <= x.size(); i++)
  {
    if (x[i] == '0' && x[i + 1] == '0' && x[i + 2] == '0' && x[i + 3] == '0' && x[i + 4] == '0' && x[i + 5] == '0' && x[i + 6] == '0')
    {
      cout << "YES";
      return 0;
    }
    else if (x[i] == '1' && x[i + 1] == '1' && x[i + 2] == '1' && x[i + 3] == '1' && x[i + 4] == '1' && x[i + 5] == '1' && x[i + 6] == '1')
    {
      cout << "YES";
    return 0 ;
    }
  }
  cout <<"NO";
  return 0;
}
/*another ans ;
string n;
int k=1;
cin>>n;
for(int i=1; i<=n.length();i++)
{
    if(n[i] == n[i-1])
    {
        k++;
        if(k==7)
        {
            cout<<"YES\n";
            return 0;
        }
    }
    else
    {
        k=1;

    }
}
    cout<<"NO";
*/
