//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<ll,ll>;

const int N=200005;
ll mod= 1e9+7;


void solve(int tc)
{
    ll n, m; cin >> n >> m;
    vector<pii> a[m];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            ll x; cin >> x;
            a[j].push_back({x,x});
        }
    }

    for(int i = 0; i<m; i++){
        sort(a[i].begin(),a[i].end());
        for(int j = n-2; 0<=j; j--)
            a[i][j].second += a[i][j+1].second;
    }
    ll ans = 0;
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n-1; j++){
            ll kot =abs(a[i][j+1].second - (n - j - 1)*a[i][j].first);
            //cout << kot << '\n';
            ans += kot;
        }
    }
    cout << ans << '\n';

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
