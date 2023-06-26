//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod = 1e9+7;

inline void normal(ll &a, ll MOD) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b, ll MOD) { a %= MOD, b %= MOD; normal(a,MOD), normal(b,MOD); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b, ll MOD) { a %= MOD, b %= MOD; normal(a,MOD), normal(b,MOD); return ((a+b)%MOD + MOD) % MOD; }
inline ll modSub(ll a, ll b, ll MOD) { a %= MOD, b %= MOD; normal(a,MOD), normal(b,MOD); a -= b; normal(a,MOD); return a; }
inline ll modPow(ll b, ll p, ll MOD) { ll r = 1; while(p) { if(p&1) r = modMul(r, b,MOD); b = modMul(b, b,MOD); p >>= 1; } return r; }
inline ll modInverse(ll a, ll MOD) { return modPow(a, MOD-2,MOD); }  /// When MOD is prime.
inline ll modDiv(ll a, ll b, ll MOD) { return modMul(a, modInverse(b, MOD),MOD); }

template <typename T>
struct BIT {
      T n;
      vector <T> Tree;
      void init(T N) {
            n = N;
            Tree = vector <T> (n + 1);
      }
      void update(T pos, T val) {
            while (pos <= n) {
                  Tree[pos] = modAdd(Tree[pos], val, mod);
                  pos += (pos & -pos);
            }
      }
      void update(T l,T r,T val)
      {
          update(l,val);
          update(r+1,-val);
      }
      T query(T pos) {
            T sum = 0;
            while (pos > 0) {
                  sum = modAdd(sum, Tree[pos], mod) ;
                  pos -= (pos & -pos);
            }
            return sum;
      }
      void clear_(){ Tree.clear(); }
};
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector <ll> a(n+3, 0);
    BIT<ll> op;
    op.init(m+2);
    vector <pair <pair <ll, ll>, ll > >vp(m);
    for(auto &i: vp)
        cin >> i.first.first >> i.first.second >>i.second ;
    for(ll i = m -1 ; i>=0 ; i--){
        if(vp[i].first.first == 1ll){
            ll kot = modAdd(1ll , op.query(i+1), mod);
            a[vp[i].first.second] = modAdd(a[vp[i].first.second], kot, mod );
            a[vp[i].second + 1] = modSub(a[vp[i].second + 1], kot, mod);
        }
        else{
            ll kot = modAdd(1ll , op.query(i+1), mod);
            op.update(vp[i].first.second, vp[i].second, kot);
        }
    }
    for(int i = 1; i<=n; i++)
        a[i] = modAdd(a[i], a[i-1], mod), cout << a[i] << " \n"[i==n];


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
