//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;
inline void normal(ll &a, ll MOD) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b, ll MOD) { a %= MOD, b %= MOD; normal(a,MOD), normal(b,MOD); return (a*b)%MOD; }

void solve()
{
    int n; cin >> n;
    vector<int> p(n);
    for(int i = 0; i<n; i++){
        int x;cin >> x;
        p[x] = i;
    }
    int l = p[0], r = l;
    ll cr_h = 1;
    for(int i = 1; i<n; i++){
        if(p[i]<l)
            l = p[i];
        else if(r < p[i])
            r = p[i];
        else
            cr_h = modMul(cr_h, r - l + 1 - i, mod);
    }
    cout << cr_h << '\n';
}



signed main()
{
     int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
