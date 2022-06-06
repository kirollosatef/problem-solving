#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ifstream read("piles.in");
	int t;
	read >> t;
	while (t--)
	{
		int x;
		read >> x;
		int arr1[x], arr2[x];
		for (int i = 0; i < x; read >> arr1[i], i++)
			;
		for (int i = 0; i < x; read >> arr2[i], i++)
			;
		for (int i = 0; i < x; i++)
		{
			if (arr1[i] != arr2[i])
			{
				cout << "NO\n";
				return 0;
			}
		}
		cout << "YES\n";
	}
}