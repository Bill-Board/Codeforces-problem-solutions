//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll MOD=998244353;
inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }  /// When MOD is prime.
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }

void solve()
{
    ll n;
    cin >> n;
    vector <ll> a(n), b(n), k(n);
    for(auto &i: a)
        cin >> i;
    for(auto &i: b)
        cin >> i;
    for(int i = 1; i<=n ;i++)
        k[i-1]= i*(n - i +1);
//    for(int i =0; i<n ; i++)
//        cout << k[i] << " ";cout << endl;

    for(int i =0; i<n ; i++)
        k[i]= a[i]*k[i];
    sort(k.begin(),k.end(),greater<>());
//    for(int i =0; i<n ; i++)
//        cout << k[i] << " ";cout << endl;
    ll cr_h =0;
    sort(b.begin(),b.end());
    for(int i =0; i<n ; i++)
        cr_h = modAdd(cr_h, modMul(k[i],b[i]));
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
