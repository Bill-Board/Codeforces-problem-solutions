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
    ll a, b, c, d;cin >>a >> b >> c >>d;
    ll p = (c*b), q = (a*d);
    if(p == 0 and q == 0){
        cout << 0 << '\n';
        return;
    }
    if(p==0 or q==0){
        cout << 1 << '\n';
        return;
    }
    ll g = __gcd(p,q);
    p /= g; q /= g;
    int cnt = 0;
    if(p>1)cnt++;
    if(q>1)cnt++;
    cout << cnt << '\n';
}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
