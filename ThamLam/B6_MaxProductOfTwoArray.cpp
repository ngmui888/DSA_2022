#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int main()
{
    int n ; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ;i++)
    {
        cin >> a[i];
    }
    int b[n];
    for(int i = 0 ; i < n ;i++)
    {
        cin >> b[i];
    }
    sort(a , a + n);
    sort(b , b + n);
    ll sum = 0;
    for(int i = 0 ; i<n ;i++)
    {
        sum += 1ll * a[i] * b[i];
    }
    cout << sum;
}
