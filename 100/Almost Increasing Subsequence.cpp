//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

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
      void clear_(){ Tree.clear(); }
};

void solve(int tc)
{
    int n, q; cin >> n >> q;
    vector<int> a(n+1), p(n+3);
    BIT <int> s;
    s.init(n);
    for(int i = 1; i<=n; i++){
        cin >> a[i];
    }
    for(int i = 1; i<=n; i++){
        if(i==1 or i==n)
            s.update(i, 1);
        else if(a[i-1] < a[i] or a[i]<a[i+1])
            s.update(i, 1);
    }
    p[n] = n;
    for(int i = n-1; 0<=i ; i--){
        if(a[i] < a[i+1])
            p[i] = i;
        else
            p[i] = p[i+1];
    }
    for(int i = 2; i<n ; i++){
        if(s.query(i-1,i-1) and s.query(i-1,i-1) and s.query(i,i)==0)
            s.update(i, 1);
    }
//    for(int i = 1; i<=n; i++)
//        cout << p[i] << " \n"[i==n];
    while(q--){
        int l, r; cin >> l >> r;
        int kot = p[l], ans = 0;
        if(kot != l)ans = min(2, kot - l + 1);
        l = kot;
        if(r < l){
            cout << ans << '\n';
            continue;
        }
        int last = s.query(r,r);
        s.update(r, -last);
        s.update(r, 1);

        int fst = s.query(l,l);
        s.update(l, -fst);
        s.update(l, 1);

        ans += s.query(l, r);
        cout << ans << '\n';
        s.update(l, -1);
        s.update(l,fst);
        s.update(r, -1);
        s.update(r,last);
    }


}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
