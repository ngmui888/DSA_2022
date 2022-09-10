#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int main()
{
    int n ; cin >> n;
    for(int i = n / 7 ; i >= 0; i--)
    {
        if((n - i * 7) % 4 == 0)
        {
            cout << string((n - i * 7) / 4 , '4') << string(i , '7');
            return 0;
        }
    }
    cout << -1;
}
