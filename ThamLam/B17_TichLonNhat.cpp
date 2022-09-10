#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int main()
{
    ll n ; cin >> n; 
    ll a[n] ; for(ll &x : a) cin >> x;
    sort(a , a + n);
    ll ans , count;
    ans = max(a[n - 1] * a[n - 2] * a[n - 3] , a[n - 1] * a[n - 2]);
    count = max(a[0] * a[1] * a[n - 1] , a[0] * a[1]);
    cout << max(ans , count);
}
