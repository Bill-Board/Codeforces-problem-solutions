//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

void solve()
{
    ll n, d, last =0;
    cin >> n >> d;
    vector<ll> a(n+2), pre(n+2), suf(n+2);
    map< ll , ll > mpp1,mpp2;
    pre[0] = LLONG_MAX;
    a[0]=0;
    a[n+1]=d+1;
    for(int i =1; i<=n ;i++){
        cin >> a[i];
        pre[i] = a[i] - last - 1;
        pre[i] = min(pre[i], pre[i-1]);
        last =a[i];
    }
    suf[n+1]=LLONG_MAX;
    suf[n] = LLONG_MAX;
    last = a[n]+1;
    for(int i =n-1; i>0; i--){
        suf[i] = last - a[i]-1;
        suf[i] = min(suf[i], suf[i+1]);
        last=a[i];
    }
    for(auto i: pre)cout << i << " ";cout << endl;
    for(auto i: suf)cout << i << " ";cout << endl;

    ll cr_h = 0;
    for(int i =1; i<=n; i++){
        ll m = min(pre[i-1], suf[i+1]);
        if(i == n)
        {
            ll dif= a[i+1] -a[i-1] -1;
            cr_h = max(cr_h, min(pre[i-1], dif));
            continue;
        }

        ll dif= a[i+1] -a[i-1] -2;
        dif /= 2;
        cr_h = max(cr_h, min(m, dif));
    }
    cout << cr_h << endl;

}



signed main()
{
    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
