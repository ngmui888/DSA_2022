#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int main()
{
    string s ; cin >> s;
    map<char,int>mp;
    for(char x : s) mp[x]++;
    int ans = 0;
    for(pair<char,int> x : mp) ans = max(ans , x.second);
    if(ans <= (s.length() / 2 + 1) && s.length() % 2 == 1) cout << "YES";
    else if(ans <= s.length() - ans && s.length() % 2 == 0) cout << "YES";
    else cout <<"NO";
}
