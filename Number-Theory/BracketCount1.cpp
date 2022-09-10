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

ll F[1000005];
void sinh()
{
    F[0] = 1;
    F[1] = 1;
    for (int i = 2; i < 1000005; i++)
    {
        F[i] = i * F[i - 1];
        F[i] %= mod;
    }
}
ll powMod(ll a, ll b, ll c)
{
    // a^b % c
    ll res = 1;
    while (b)
    {
        if (b % 2 == 1)
        {
            res *= a;
            res %= c;
        }
        a *= a;
        a %= c;
        b /= 2;
    }
    return res;
}
ll inverse(ll a, ll p)
{
    return powMod(a, p - 2, p);
}
int main()
{
    sinh();
    ll n;
    cin >> n;
    if (n % 2 == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    ll x = n / 2;
    ll res = F[2 * x];
    res *= inverse(F[x], mod);
    res %= mod;
    res *= inverse(F[x + 1], mod);
    res %= mod;
    cout << res << endl;
}