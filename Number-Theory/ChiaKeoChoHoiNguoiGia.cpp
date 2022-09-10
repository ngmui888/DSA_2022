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
ll derangement(ll n)
{
    if (n == 0)
        return 1;
    else
        return (n % mod * derangement(n - 1) % mod) + (ll)pow(-1, n);
}
int main()
{
    ll n;
    cin >> n;
    cout << derangement(n) << endl;
}