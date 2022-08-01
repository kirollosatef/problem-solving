#include <bits/stdc++.h>
#define pb push_back
#define v(x) vector<x>
#define sz(v) (int)(v).size()
#define all(str) str.begin(), str.end()
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;
typedef long long ll;
int main()
{
  o_a;
  char ch;
  cin >> ch;
  char arr[4][3];
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cin >> arr[i][j];
    }
  }
  // print the matrix
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  // if (s1[0] == ch && s2[0] == ch && s3[0] == ' ')
  //   cout << "Yes you can.";
  // else if (s1[0] == ch && s2[0] == ' ' && s3[0] == ch)
  //   cout << "Yes you can.";
  // else if (s1[0] == ' ' && s2[0] == ch && s3[0] == ch)
  //   cout << "Yes you can.";
  // else if (s1[1] == ch && s2[1] == ch && s3[1] == ' ')
  //   cout << "Yes you can.";
  // else if (s1[1] == ch && s2[1] == ' ' && s3[1] == ch)
  //   cout << "Yes you can.";
  // else if (s1[1] == ' ' && s2[1] == ch && s3[1] == ch)
  //   cout << "Yes you can.";
  // else if (s1[2] == ch && s2[2] == ch && s3[2] == ' ')
  //   cout << "Yes you can.";
  // else if (s1[2] == ch && s2[2] == ' ' && s3[2] == ch)
  //   cout << "Yes you can.";
  // else if (s1[2] == ' ' && s2[2] == ch && s3[2] == ch)
  //   cout << "Yes you can.";
  // else if (s1[0] == ch && s2[1] == ch && s3[2] == ' ')
  //   cout << "Yes you can.";
  // else if (s1[0] == ch && s2[1] == ' ' && s3[2] == ch)
  //   cout << "Yes you can.";
  // else if (s1[0] == ' ' && s2[1] == ch && s3[2] == ch)
  //   cout << "Yes you can.";
  // else if (s1[2] == ch && s2[1] == ch && s3[0] == ' ')
  //   cout << "Yes you can.";
  // else if (s1[2] == ch && s2[1] == ' ' && s3[0] == ch)
  //   cout << "Yes you can.";
  // else if (s1[2] == ' ' && s2[1] == ch && s3[0] == ch)
  //   cout << "Yes you can.";
  // else
  //   cout << "No you can't.";
}
