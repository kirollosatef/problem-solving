#include <bits/stdc++.h>
using namespace std;
void removeAllChar(string &s , char x ){
    s.erase(remove(s.begin() , s.end() , x) , s.end());
}
int main()
{
    string s ;
    cin >> s ;
    int t ;
    cin >> t ;
    while(t--){
        char x ;
        cin >> x ;
        removeAllChar(s , x);
    }
    cout << s << endl;
}
