#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ifstream read("hello.in");
	int t;
	read >> t;
	while (t--)
	{
		int x, y;
		read >> x >> y;
		cout << "sum = " << y + x << endl;	
	}
}