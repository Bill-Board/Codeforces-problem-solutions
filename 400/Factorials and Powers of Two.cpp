//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=1e13;

void solve()
{
    ll n, cr_h =LLONG_MAX;
    cin >> n;
    vector<ll> fac;
    ll sum =1;
    for(ll i=1; sum<=n; i++, sum *= i)
        fac.push_back(sum);
    int lop = 1ll << fac.size();

    for(int i = 0 ; i < lop ; i++)
    {
        ll sum =0, cnt =0;
        for(int j =0; j<fac.size(); j++)
            if(i & (1ll<<j))
                sum+=fac[j], cnt++;
        cr_h = min(cr_h, cnt +__builtin_popcountll(n-sum));
    }
    cout << cr_h << endl;
}



signed main()
{
    ll test_case=1;
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
