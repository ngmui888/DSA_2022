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

int powMod(int x)
{
    ll res = 1;
    ll a = 2;
    while (x)
    {
        if (x % 2 == 1)
        {
            res *= a;
        }
        a *= a;
        x /= 2;
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 5; i <= n; i *= 5)
    {
        cnt += n / i;
    }
    int cnt2 = 0;
    int cnt3 = 0;
    ll ans = 1;
    for (int i = 1; i <= n; i++)
    {
        int j = i;
        while (j % 5 == 0 && cnt2 < cnt)
        {
            j /= 5;
            ++cnt2;
        }
        while (j % 2 == 0 && cnt3 < cnt)
        {
            j /= 2;
            ++cnt3;
        }
        ans *= j;
        ans %= 10;
    }
    cout << ans << endl;
}