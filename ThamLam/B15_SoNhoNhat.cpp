#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int main()
{
    int s , d ; cin >> s >> d;
    if(d * 9 < s)
    {
        cout << -1;
    }
    else
    {
        string res = "";
        s -= 1;
        for(int  i = 0 ; i < d - 1 ; i++)
        {
            if(s >= 9)
            {
                res += "9";
                s -= 9;
            }
            else
            {
                res = to_string(s) + res;
                s = 0;
            }
        }
        s += 1;
        res = to_string(s) + res;
        cout << res;
    }
}
