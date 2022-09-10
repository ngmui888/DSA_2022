#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9;

int main()
{
    int n ; cin >> n;
    int a[n];
    for(int i = 0 ; i < n;i++)
    {
        cin >> a[i];
    }
    sort(a , a + n);
    int dem = 0;
    ll sum = 0;
    for(int i = 0 ; i < n  ; i++)
    {
        if(a[i] >= sum)
        {
            ++dem;
            sum += a[i];
        }
    }
    cout << dem << endl;
}
