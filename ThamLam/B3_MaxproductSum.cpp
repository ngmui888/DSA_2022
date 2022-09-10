#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int main()
{
    int n ; cin >> n;
    ll a[n];
    for(int i = 0 ; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a , a + n);
    ll res = 0;
    for(int i = 1 ; i < n ; i++)
    {
        res += a[i] *i;
        res %= MOD;
    }
    cout << res;
}
