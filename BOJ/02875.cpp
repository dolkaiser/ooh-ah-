#define _USE_MATH_DEFINES
#include <bits/stdc++.h>

using namespace std;

int n, m, k;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n>>m>>k;

	for(int i = 0; i < k; i++)
	{
		if(n < m * 2)m--;
		else n--;
	}

	cout<<min(n / 2, m);

	return 0;
}