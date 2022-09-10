#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9;
void nhoNhat(string &s)
{
    for(char &x : s)
    {
        if(x == '6')
        {
            x = '5';
        }
    }
}
void LonNhat(string &s)
{
    for(char &x : s)
    {
        if(x == '5')
        {
            x = '6';
        }
    }
}
int main()
{
    string a , b ; cin >> a >> b ;
    LonNhat(a); LonNhat(b);
    cout << stoll(a) + stoll(b) << " ";
    nhoNhat(a);nhoNhat(b);
    cout << stoll(a) + stoll(b) << " ";
}
