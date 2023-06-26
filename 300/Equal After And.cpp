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
    ll n;
    cin >> n;
    vector<ll > a(n);
    for(auto &i: a)
        cin >> i;
    ll val = a.front();
    for(auto i: a)
        val &= i;
    ll kot = (1ll<<33) -1, cr_h = 0;
    a.push_back(val);
    for(ll i = 0, len = 0; i<a.size(); i++){
        if((kot&a[i]) != val){
            kot &= a[i];
            len++;
        }
        else{
            cr_h += len;
            len = 0;
            kot = (1ll<<33) -1;
        }
    }
    cout << cr_h << endl;
}



signed main()
{
    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
