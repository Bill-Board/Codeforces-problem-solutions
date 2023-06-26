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
    ll n, k; cin>> n>>k;
    ll mot=n-k;
    vector<ll> a(n+1);
    for(ll i =1; i<=n; i++)
        cin >> a[i];
    ll cnt= 0;
    for(ll i = 1; i<= n-min(32ll,k); i++){
        cout << i << "  i || \n";
        ll last=-1;
        bool ok = true;
        for(ll j=i, p = 1;j<=i+min(32ll,k) and j<=n;j++,p*=2){
            cout << "j " << j << '\n';
            if(a[j]*p <= last)
                ok=false;
            last = a[j]*p;
        }
        if(ok)cnt++;
    }
    cout << mot << " " << cnt << '\n';
    ll cr_h = mot-cnt;
    cout << cr_h <<'\n';

}



signed main()
{
    ll test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
