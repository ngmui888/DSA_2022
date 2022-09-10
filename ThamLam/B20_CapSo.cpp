#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9;
bool check(int a[] , int n)
{
    int le = 0 , chan = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(a[i] % 2 == 0) ++chan;
        else ++le;
    }
    if((le + chan) % 2 != 0) return false;
    else if(le % 2 == 0) return true;
    for(int i = 0 ; i < n; i++)
    {
        for(int j = i + 1 ; j < n ; j++)
        {
            if(abs(a[j] - a[i]) == 1)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int n ; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    if(check(a , n)) cout << "YES";
    else cout << "NO";
}
