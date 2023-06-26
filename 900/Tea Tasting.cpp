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


void solve(int tc)
{
    ll n; cin >> n;
    vector<ll> a(n+1), b(n+1), ans(n+5), baki(n+5), pre(n+1);
    for(int i = 1; i<=n; i++)
        cin >> a[i];
    for(int i = 1; i<=n; i++){
        cin >> b[i];
        pre[i] = pre[i-1] + b[i];
    }
    ll sum = 0;
    for(ll i = 1; i<=n; i++){
        ll val = a[i] + sum; sum += b[i];
        ll pos = upper_bound(pre.begin(), pre.end(), val) - pre.begin();
        //cout << pos << '\n';
        if( pos <= n){
            //cout << val << " " << pre[pos-1] << '\n';
            baki[pos] += val - pre[pos-1] ;
        }
        if( i < pos ){
            ans[i]++; ans[pos]--;
        }
    }
    for(int i = 1; i<=n; i++)
        ans[i] += ans[i-1];//,cout << ans[i] << " \n"[i==n];
    for(int i = 1; i<=n; i++)
        baki[i] += ans[i]*b[i],
        cout << baki[i] << " \n"[i==n];
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
