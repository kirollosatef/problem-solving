/*
 * @lc app=leetcode id=1003 lang=cpp
 *
 * [1003] Check If Word Is Valid After Substitutions
 */

#include <bits/stdc++.h>
using namespace std;
// so idea is removeany abc founded

// @lc code=start
class Solution
{
public:
    bool isValid(string s)
    {
        int i = 0;
        if (s.size() % 3 != 0)
            return false;
        while (i < s.size() - 3)
        {
            string str1 = s.substr(i, 3);
            if (str1 == "abc")
            {
                s = s.substr(0, i) + s.substr(i + 3);
                i = 0;
            }
            else
            {
                i++;
            }
        }
        cout << "Las S: " << s << endl;
        if (s == "abc")
            return true;
        return false;
    }
};
// @lc code=end

int main()
{
    // test
    Solution s;
    // cout << "Ans IS ------->> " << s.isValid("aabcbc") << endl;       // true
    // cout << "Ans IS ------->> " << s.isValid("abcabcababcc") << endl; // true
    // cout << "Ans IS ------->> " << s.isValid("abccba") << endl;       // false
    // cout << "Ans IS ------->> " << s.isValid("cababc") << endl;       // false
    cout << "Ans IS ------->> " << s.isValid("abacbabcc") << endl; // false
    return 0;
}