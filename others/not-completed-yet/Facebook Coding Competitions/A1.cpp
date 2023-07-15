#include <bits/stdc++.h>
#define pb push_back
#define sz(v) (v).size()
#define vi vector<int>
#define vs vector<string>
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;
typedef long long ll;
int main()
{
  o_a;
  string str;
  cin >> str;
  char vowel[] = {'A', 'E', 'I', 'O', 'U'};
  int arr[26] = {0}, v = -1, mx = 0;
  for (int i = 0; i < sz(str); i++)
    arr[str[i] - 'A']++;
  for (int i = 0; i < 5; i++)
  {
    if (arr[vowel[i] - 'A'] > 0 && arr[vowel[i] - 'A'] > mx)
    {
      mx = arr[vowel[i] - 'A'];
      v = i;
    }
  } 
  (v != -1) ? cout << vowel[v] : cout << "non";
}