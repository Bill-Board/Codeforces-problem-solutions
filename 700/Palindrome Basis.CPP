//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
vector<ll> p, pali, cnt;
ll mod = 1e9 + 7;
inline void normal(ll &a, ll MOD) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b, ll MOD) { a %= MOD, b %= MOD; normal(a,MOD), normal(b,MOD); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b, ll MOD) { a %= MOD, b %= MOD; normal(a,MOD), normal(b,MOD); return (a+b)%MOD; }
inline ll modSub(ll a, ll b, ll MOD) { a %= MOD, b %= MOD; normal(a,MOD), normal(b,MOD); a -= b; normal(a,MOD); return a; }
inline ll modPow(ll b, ll p, ll MOD) { ll r = 1; while(p) { if(p&1) r = modMul(r, b,MOD); b = modMul(b, b,MOD); p >>= 1; } return r; }
inline ll modInverse(ll a, ll MOD) { return modPow(a, MOD-2,MOD); }  /// When MOD is prime.
inline ll modDiv(ll a, ll b, ll MOD) { return modMul(a, modInverse(b, MOD),MOD); }


void okay_pre(int n)
{
    cnt.resize(n+4, 0);
    cnt[0] = 1;
    int k = 0;
    for(int i=0; i<pali.size(); i++)
        for(int j=pali[i]; j<=n; j++)
            cnt[j] = modAdd(cnt[j], cnt[j-pali[i]], mod), k++;
}
void alabu(int n){
    for(int i = 1; i<=n; i++){
        string p = to_string(i);
        int val = 0;
        for(int j = p.size() - 1; j>=0; j--)
            val =10*val + p[j]-'0';
        if(val == i)
        pali.push_back(i);
    }
}



void solve()
{
    int n;
    cin >> n;
    cout << cnt[n] << endl;
}



signed main()
{
    alabu(40010);
    okay_pre(40010);
    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
