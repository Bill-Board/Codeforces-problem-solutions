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

ll alabu(ll l, ll r){
    ll sum1 = (l * (l - 1))/2ll;
    ll sum2 = (r * (r + 1))/2ll;
    return sum2 - sum1;
}


void solve(int tc)
{
    ll n; cin >> n;
    vector<ll> a(n+1), pre(n+1, 0);
    for(ll i =1; i<=n; i++){
        cin >> a[i];
        pre[i] = pre[i-1] + a[i];
    }
    ll ans = 0;
    for(ll i = 1; i<=n; i<<=1){
        vector<ll> ek, dui;
        for(ll l = 1; l<=n; l+=i){
            ll r = l + i - 1;
            ek.push_back(pre[r] - pre[l-1]);
            dui.push_back(alabu(l, r));
        }
        for(ll j = 0; j<ek.size(); j+=2){
            if(j+1>=ek.size())continue;
            if(ek[j]>ek[j+1])
                ans++;
        }
        sort(ek.begin(),ek.end());
        sort(dui.begin(),dui.end());
        for(ll j = 0; j<ek.size(); j++)
            if(ek[j] != dui[j]){
                cout << -1 << '\n';
                return;
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
