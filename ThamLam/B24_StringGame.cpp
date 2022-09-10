#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long ull;
const int MOD = 1e9 + 7;

int main()
{
    string s ; cin >> s;
    vector<int>v;
    map<char,int>mp;
    for(int i = 0 ; i < s.length() ; i++)
    {
        mp[s[i]]++;
    }
    for(pair<char,int>x : mp)
    {
        if(x.second % 2 == 1)
        {
            v.push_back(x.second);
        }
    }
    if(v.size() <= 1) cout << 1;
    else
    {
        int tmp = v.size() - 1;
        if(tmp % 2 == 1) cout << 2;
        else cout << 1;
    }
}
