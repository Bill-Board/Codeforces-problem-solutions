//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

void solve(int tc)
{
    ll n, m, l ,r;
    cin >> n >> m >> l >> r;
    ll lcm = n / __gcd(n, m);

    if(lcm > r/m)
        cout << 0 << '\n';
    else{
        lcm *= m;
        ll R = r/lcm;
        ll L = (l-1)/lcm;
        cout << R - L << '\n';
    }
}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
