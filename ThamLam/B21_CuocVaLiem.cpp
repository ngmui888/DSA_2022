#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long ull;
const int MOD = 1e9 + 7;

int main()
{
    int a , b; cin >> a >> b;
    cout << min({a, b , (a + b) / 3});
}
