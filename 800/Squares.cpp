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
    ll n, cr_h = 0, mod= 998244353;
    cin >> n;
    for(ll i =1; i*i <= n; i++){
        ll kot = n/ i;
        kot = (kot  - i)/2ll + 1;
        cr_h = ( cr_h+ kot ) % mod;
    }
    cout << cr_h << endl;

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
