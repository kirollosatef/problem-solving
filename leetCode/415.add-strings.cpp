/*
 * @lc app=leetcode id=415 lang=cpp
 *
 * [415] Add Strings
 */

#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
private:
    string add2Charts(char ch1, char ch2)
    {
        int n1 = ch1 - '0';
        int n2 = ch2 - '0';

        int sum = n1 + n2;

        string ans = "";

        while (sum > 9)
        {
            ans += "1";
            sum -= 10;
        }

        ans += sum + '0';

        return ans;
    }

    string fixAdditionalNum(string num, char xra, int ndx)
    {
        string newNum = num;
        int carry = xra - '0';
        int i = ndx;

        while (i >= 0 && carry > 0)
        {
            int digit = newNum[i] - '0' + carry;
            if (digit >= 10)
            {
                newNum[i] = (digit % 10) + '0';
                carry = digit / 10;
            }
            else
            {
                newNum[i] = digit + '0';
                carry = 0;
            }
            i--;
        }

        if (carry > 0)
        {
            newNum = to_string(carry) + newNum;
        }

        return newNum;
    }

public:
    string addStrings(string num1, string num2)
    {
        if (num1 == "0" || num2 == "0")
        {
            if (num1 == "0" && num2 == "0")
                return "0";
            if (num1 == "0")
                return num2;
            if (num2 == "0")
                return num1;
        }

        string result = "";
        int i = num1.length() - 1;
        int j = num2.length() - 1;

        while (i >= 0 && j >= 0)
        {
            string sum = add2Charts(num1[i], num2[j]);

            if (sum.length() > 1)
            {
                // There's a carry
                char carry = sum[0];
                char digit = sum[1];

                result = digit + result;

                if (i > 0)
                {
                    num1 = fixAdditionalNum(num1, carry, i - 1);
                }
                else if (j > 0)
                {
                    num2 = fixAdditionalNum(num2, carry, j - 1);
                }
                else
                {
                    result = carry + result;
                }
            }
            else
            {
                result = sum + result;
            }

            i--;
            j--;
        }

        // Add remaining digits from num1
        while (i >= 0)
        {
            result = num1[i] + result;
            i--;
        }

        // Add remaining digits from num2
        while (j >= 0)
        {
            result = num2[j] + result;
            j--;
        }

        return result;
    }
};
// @lc code=end
