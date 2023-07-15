/**
**By:kero_Atef
**Date:2021/05/31-01:56
**/
/*clear() — to clear the stream
str() — to get and set string object whose content is present in stream.
operator << — add a string to the stringstream object.
operator >> — read something from the stringstream object,*/
#include <bits/stdc++.h>
using namespace std;
int countwords(string str)
{
  stringstream ss(str); // Used for breaking words
  string word;          // to store the individual words
  int count = 0;
  while (ss >> word)
    count++;
  return count;
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string str;
  getline(cin, str);
  cout << countwords(str) << endl;
}