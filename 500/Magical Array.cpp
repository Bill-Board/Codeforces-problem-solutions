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
    int n, m; cin >> n >> m;
    vector<pair<ll, ll> > vp;
    for(int i = 1; i<=n; i++){
        ll ans = 0;
        for(int j = 1; j <= m; j++){
            ll x; cin>> x;
            ans += (j*x);
        }
        vp.push_back({ans, i});
    }
    sort(vp.begin(),vp.end());
    cout << vp.back().second << " " << vp.back().first - vp.front().first << '\n';


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
