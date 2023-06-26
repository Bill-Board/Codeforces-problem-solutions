//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=200005;
ll MOD= 1e9+7;

inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }  /// When MOD is prime.
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }

ll hs[3], pow_[N];
string s[3];

void hashing(){
    int n = s[1].size();
    ll power = 37;
    pow_[0]=1;
    hs[1] = hs[2] = 0;
    for(int i = 1; i<=n; i++){
        pow_[i] = modMul(pow_[i-1] , power);
        for(int j = 1; j<=2; j++){
            ll val = s[j][i-1] - 'a' + 1;
            hs[j] = modAdd(val, modMul(hs[j], power));
        }
    }
}

ll update(int p, char c, int k){ /// k = s or t
    ll val = s[k][p-1] - 'a' + 1;
    ll n_val =c - 'a'+  1;
    p = s[1].size() - p;
    hs[k] = modSub(hs[k], modMul(val, pow_[p]));
    hs[k] = modAdd(hs[k], modMul(n_val, pow_[p]));
}


void solve(int tc)
{
    cin >> s[1] >> s[2];
    int tm, q; cin >> tm >> q;
    hashing();
    //ll h1, h2;
    map<int, pair<char, pair<char, int>>> mpp;
    for(int i = 1; i<=q; i++){
        int typ; cin >> typ;
        if(mpp.count(i - tm )){
            char ek = mpp[i-tm ].first, dui = mpp[i-tm].second.first;
            int p = mpp[i-tm].second.second;
            update(p, ek, 1);
            update(p, dui, 2);
            s[1][p-1] = ek;
            s[2][p-1] = dui;
        }

        if(typ == 1){
            /// block korte hbe;
            int p; cin >> p;
            char ek = s[1][p-1], dui = s[2][p-1];
            update(p, 'a', 1); /// s update
            update(p, 'a', 2); /// t update
            mpp[i] = {ek, {dui, p}};
            s[1][p-1] = 'a';
            s[2][p-1] = 'a';
        }
        else if(typ == 2){
            int k1, p1, k2, p2; cin >> k1 >> p1 >> k2 >> p2;
            char ek = s[k1][p1-1], dui=s[k2][p2-1];
            update(p1, dui, k1);
            update(p2, ek, k2);
            s[k1][p1-1] = dui;
            s[k2][p2-1] = ek;
        }
        else{
            if(hs[1] == hs[2]) cout << "YES\n";
            else cout << "NO\n";
        }
    }
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
