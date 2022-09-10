#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9;

int main()
{
    int n ; cin >> n;
    int a[] = {1000 , 500 , 200 , 100 , 50 , 20 , 10 , 5 , 2 , 1};
    ll ans = 0;
    for(int i = 0 ; i < 10 ; i++)
    {
        ans += n / a[i];
        n %= a[i];
    }
    cout << ans;
}
