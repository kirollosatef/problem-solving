// Vasily Tadokorov is a stringologist. He thinks a string is fragrant if it can be divided into two parts: nunhehheh as the prefix and a number of (excluding 0) a as the suffix. For example, nunhehhehaaaaaa is fragrant, but nunhehheh and nunhehhehoooaaa are not fragrant.
// Today Vasily Tadokorov has some strings consisting of lowercase English letters. For each string, he wants to know how many subsequences of this string are fragrant. A string a is a subsequence of a string b if a can be obtained from b by deletion of several (including 0) characters.
// The above is a problem of string that Vasily came up with. As we know, a problem usually has several examples for better understanding. However, Vasily gets buried in making some fragrant examples. After 2000 years, he finally makes two perfect examples as follows.
// Example 1:
// Input: nunhehhehahaahahahahahahaahaahahahahha
// Output: 114514
// Example 2:
// Input: nunhehhehhehhahaahahahaahaahahaaaahaa
// Output: 1919810
// Vasily is not clever enough. He doesn't want to work for another 2000 years, so he asks you for help. He gives you T tasks, each of which contains an integer n, and you should construct a string consisting of only lowercase English letters that has exactly n fragrant subsequences.
// Input
// The first line contains an integer T (1≤T≤1000), denoting the number of tasks.
// Each of the next T lines contains an integer n (0≤n≤109).
// Output
// For each test case, output one string consisting of only lowercase English letters in a single line indicating the answer. You need to ensure that the sum of the length over all the output strings does not exceed 106. It can be proved that a solution always exists. If there are multiple solutions, print any.
#include <bits/stdc++.h>
using namespace std;
// 0  chousile
// 1  nunhehheh a
// 2  nunhehheh ha
// 3  nunhehheh aa
// 4  nunhehheh aha
// 5  nunhehheh ahha
// 6  nunhehheh haa
// 7  nunhehheh aaa
// 8  nunhehheh aaha
// 9  nunhehheh aahha
// 10 nunhehheh ahaa
// 11 nunhehheh ahaha
// 12 nunhehheh ahahha
// 13 nunhehheh ahhaa
// 14 nunhehheh haaa
// 15 nunhehheh aaaa
// 16 nunhehheh aaaha
// 17 nunhehheh aaahha
// 18 nunhehheh aahaa
// 19 nunhehheh aahaha
// 20 nunhehheh aahahha
// 21 nunhehheh aahhaa
// 22 nunhehheh ahaaa
// 23 nunhehheh ahaaha
// 24 nunhehheh ahaahha
// 25 nunhehheh ahahaa
// 26 nunhehheh ahahaha
// 27 nunhehheh ahahahha
// 28 nunhehheh ahahhaa
// 29 nunhehheh ahhaaa
// 30 nunhehheh haaaa
// 31 nunhehheh aaaaa
int main()
{
  int t;
  cin >> t;
  string one = "nunhehheh";
  while (t--)
  {
    int x;
    cin >> x;
    if (x == 0)
    {
      cout << "chousile" << endl;
      continue;
    }
    string s = one;
    
  }
}
/*
1000

32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
86
87
88
89
90
91
92
93
94
95
96
97
98
99
100
101
102
103
104
105
106
107
108
109
110
111
112
113
114
115
116
117
118
119
120
121
122
...
Answer
































nunhehhe...*/
