#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// ifstream cin("two.in");
	// int t;
	// cin >> t;
	// while (t--)
	// {
	int x, ss = 0, y = 1;
	cin >> x;
	if (x == 0 || x == 1)
		cout << -1 << endl;
	else if (x % 2 == 0)
	{
		for (int i = 1; i < x; i++)
		{
			y = 2 * i;
			if (y >= x)
				break;
		}
		ss = log2(y);
		cout << ss;
	}
}
/*
1 -1
2 1
3 3
4 2
5 4
6 3
7 5
8 3
9 5
10 4
11 6
12 5
13 7
14 6
15 8	
16 4
*/