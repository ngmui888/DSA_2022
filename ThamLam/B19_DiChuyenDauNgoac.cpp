#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9;

int main()
{
    string s ; cin >> s;
    stack<char>st;
    int ans = 0;
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(st.empty())
        {
            st.push(s[i]);
        }
        else if(s[i] == ')' && st.top() == '(')
        {
            ans += 2;
            st.pop();
        }
        else st.push(s[i]);
    }
    cout << (s.length() - ans) / 2;
}
