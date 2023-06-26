//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=200005;
ll mod= 1e9+7;

int koita(ll n, int p){
    int cnt = 0;
    while(n % p == 0)
        cnt++, n/=p;
    return cnt;
}
ll alabu(int val, int p){
    ll ans = 1;
    for(int i = 0; i<p; i++)
        ans *= val;
    return ans;
}


void solve(int tc)
{
    ll n, m; cin >> n >> m;
    int tw = koita(n, 2), fiv = koita(n, 5);
    ll l = min(tw,fiv), r = 18, ans = m;
    while(l<=r){
        int mid = (l + r)/2;
        int tw_lagbe = mid - tw, fiv_lagbe = mid - fiv;
        ll val = alabu(2, tw_lagbe) * alabu(5, fiv_lagbe);
        if(val <= m)
            l = mid + 1, ans = val;
        else
            r = mid - 1;
        //cout << l << " " << r << '\n';
    }
    ll mx = ans, lmt = 1e18, kot = ans; l = 1, r = m;
    //cout << ans << '\n';
    while( l <= r){
        ll mid = (l + r)/2;
        if(mid*ans <= m)
            l = mid + 1, kot = mid*ans;
        else
            r = mid - 1;
    }
    cout << n*kot << '\n';


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
