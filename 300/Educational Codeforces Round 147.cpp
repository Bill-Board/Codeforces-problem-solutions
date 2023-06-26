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
    ll n, k; cin >> n >> k;
    vector<ll> l(n), r(n);
    for(auto &i: l)
        cin >> i;
    for(auto &i: r)
        cin >> i;
    ll ans = LLONG_MAX, sumL = 0, one = 0;
    for(int i = 0; i<n; i++){
        ll cnt = r[i] - l[i] + 1;
        if(cnt == 1) one++;
        else sumL += cnt;
        if(k <= sumL){
            ans = min(ans, r[i] - (sumL - k) + 2*(i + 1 - one));
            break;
        }
        if(k <= sumL + one){
            ll seg = i + 1 - one + k - sumL;
            ans = min(ans, r[i] + 2*seg);
        }
    }
    if(ans == LLONG_MAX) ans = -1;
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
