#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int main()
{
    int n , s , m ; cin >> n >> s >> m;
    if(n * (s - s/ 7) < s * m) cout << -1;
    else
    {
        for(int i = 1 ; i <= s - s/ 7 ; i++)
        {
            if(n * i >= s * m)
            {
                cout << i;
                return 0;
            }
        }
    }
}
