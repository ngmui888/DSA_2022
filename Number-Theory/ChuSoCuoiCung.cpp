#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
	ll n ;cin >> n;
	if(n == 0)
	{
		cout << 1;
	}
	else if(n % 4 == 1)
	{
		cout << 8;
	}
	else if(n % 4 == 2)
	{
		cout << 4;
	}
	else if(n % 4 == 3)
	{
		cout << 2;
	}
	else cout << 6;
    return 0;
}
