#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9;

int main()
{
    int n ; cin >> n;
    set<int>se;
    for(int i = 2 ; i <= sqrt(n) ; i++)
    {
        if(n % i == 0)
        {
            se.insert(i);
            n /= i;
            if(se.size() == 2) break;
        }
    }
    if(se.size() <= 1 || n == 1 || se.count(n) == 1)
    {
        cout << "NO";
    }
    else cout << "YES";
}
