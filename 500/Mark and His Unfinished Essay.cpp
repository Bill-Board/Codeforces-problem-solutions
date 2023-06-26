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
    int n, c, q;
    string s; cin >> n >> c >> q >> s;
    map<pair<ll,ll>, pair<ll,ll> > mpp;
    ll x = n;
    for(int i=0; i<c; i++){
        ll l, r;cin >> l >> r;
        ll y = x + r - l + 1;
        mpp[{x+1,y}] = {l, r};
        x = y;
    }
    while(q--){
        ll k; cin >> k;
        auto i = mpp.rbegin();
        while(i != mpp.rend() and k>n){
            auto a = (*i).first, b = (*i).second;
            if(a.first<= k and k<= a.second){
              k = b.first + k - a.first ;
            }
            i++;
        }
        cout << s[k-1] << '\n';
    }
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
