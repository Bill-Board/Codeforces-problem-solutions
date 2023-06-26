//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

void solve()
{
    ll n, h, m;
    cin >> n >> h >> m;
    ll ans = LLONG_MAX;
    for(int i = 0; i<n; i++){
        ll H, M; cin>> H >> M;
        if(H < h){
            ll mot = (24+H)*60 + M - (h * 60  + m);
            ans = min(ans, mot);
        }
        else if(H==h and M < m){
            ll mot = (24+H)*60 + M - (h * 60  + m);
            ans = min(ans, mot);
        }
        else{
            ll mot = H*60 + M - (h * 60  + m);
            ans = min(ans, mot);
        }
    }
    //cout << ans << '\n';
    cout << (ll)ans/60 << ' ' << ans%60 << '\n';
}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
