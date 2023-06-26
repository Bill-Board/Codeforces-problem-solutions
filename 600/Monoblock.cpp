//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;
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
                  Tree[pos] += val;
                  pos += (pos & -pos);
            }
      }
      void range_update_1(T l,T r,T x)
      {
          update(l,x);
          update(r+1,-x);
      }
      void range_update_2(T l,T r,T x)
      {
          update(l,x*(l-1));
          update(r+1,-x*r);
      }
      T query(T pos) {
            T sum = 0;
            while (pos > 0) {
                  sum += Tree[pos];
                  pos -= (pos & -pos);
            }
            return sum;
      }
      T query(T l, T r) {
            return query(r) - query(l - 1);
      }
      void clear_()
      {
          Tree.clear();
      }
};

BIT<ll>ek,dui;

void update_range(ll l,ll r,ll x)
{
    ek.range_update_1(l,r,x);
    dui.range_update_2(l,r,x);
}
ll _query(ll b)
{
    return ek.query(b)*b -dui.query(b);
}

ll range_query(ll a,ll b)
{
    return _query(b) - _query(a-1);
}





int position(int x, int n){
    return n - x + 1;
}
void solve(int tc)
{
    ll n, m; cin >> n >> m;
    vector<ll> a(n+3,-1), b(n+3,0);
    ek.init(n+3);
    dui.init(n+3);
    for(ll i = n;i > 0; i--)
        cin >> a[i];
    for(ll i = 1; i<=n; i++){
        if(a[i] != a[i-1])
            update_range(i, n, i), b[i] = i;
        else
            update_range(i, n, 1ll), b[i] = 1;
    }
    //return;
    while(m--){
        ll pos , x; cin >> pos >> x;
        pos = position(pos, n);
        update_range(pos, n, -b[pos]);
        a[pos] = x;
        if(a[pos] != a[pos-1])
            update_range(pos, n, pos),b[pos] = pos;
        else
            update_range(pos, n, 1ll),b[pos] = 1;

        if(pos != n){
            update_range(pos+1, n, -b[pos+1]);
            if(a[pos+1] != a[pos])
                update_range(pos+1, n, pos+1),b[pos+1] = pos+1;
            else
                update_range(pos+1, n, 1ll),b[pos+1] = 1;
        }
        cout << range_query(1ll, n) << '\n';
    }
}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
