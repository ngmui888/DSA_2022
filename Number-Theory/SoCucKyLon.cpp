#include <bits/stdc++.h>
using namespace std;

#define all(a) a.begin(), a.end()
#define ms(a, n) memset(a, n, sizeof(a))
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const int mod = 1e9 + 7;

bool check(ll a[], ll n, ll k, double m)
{
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt += (ll)(a[i] / m);
    }
    return cnt >= k;
}
int powMod(int n, int k)
{
    int res = 1;
    while (k)
    {
        if (k % 2 == 1)
        {
            res *= n;
            res %= 10;
        }
        n *= n;
        n %= 10;
        k /= 2;
    }
    return res;
}
int main()
{
    ll n;
    cin >> n;
    ll res = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        res = res * 10 + x;
        res %= mod;
    }
    cout << res << endl;
}