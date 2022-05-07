#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ifstream read("mex.in");
	int t;
	read >> t;
	while (t--)
	{
		int n, k, miin = 1;
		read >> n >> k;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			read >> arr[i];
		}
		while (k--)
		{
			int count[1000] = {0};
			int x, y;
			read >> x >> y;
			for (int i = x - 1; i < y; i++)
				count[arr[i]]++;
			for (int i = 1; i < 1000; i++)
			{
				if (count[i] == 0)
				{
					cout << i << endl;
					break;
				}
			}
		}
	}
}
/*//!run time error
7
4
3
1
1
2
1
1
1
3
3
2
5
4
2
1
*/