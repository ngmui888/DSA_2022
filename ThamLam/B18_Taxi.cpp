#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long ull;
const int MOD = 1e9 + 7;

int main()
{
    int n ; cin >> n;
    int a[5] = {0};
    for(int i = 0 ; i < n ;i++)
    {
        int x ; cin >> x;
        a[x]++;
    }
    int res = a[4] + a[3] + a[2] / 2;
    a[1] = a[1] > a[3] ? a[1] - a[3] : 0;
    a[2] %= 2;
    if(a[2] > 0)
    {
        res += 1;
        a[1] = a[1] > 2 ? a[1] - 2 : 0;
    }
    res += a[1] / 4;
    a[1] %= 4;
    if(a[1] > 0) res += 1;
    cout << res;
}
