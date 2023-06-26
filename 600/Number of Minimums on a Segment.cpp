//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef int ll;
const int N=200005;
ll mod= 1e9+7;



typedef tree< ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> ott;
/// find_by_order(k)  kth index a ki ache, pointer return korbe.
/// order_of_key(x)  x kon position a ache , oita bole dibe


int n, t[4*N], a[N];
void build(int v, int tl, int tr) {
    if (tl == tr) {
        t[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(v*2, tl, tm);
        build(v*2+1, tm+1, tr);
        t[v] = min(t[v*2] , t[v*2+1]);
    }
}

int sum(int v, int tl, int tr, int l, int r) {
    if (l > r)
        return INT_MAX;
    if (l == tl && r == tr) {
        return t[v];
    }
    int tm = (tl + tr) / 2;
    return min(sum(v*2, tl, tm, l, min(r, tm)) , sum(v*2+1, tm+1, tr, max(l, tm+1), r));
}
void update(int v, int tl, int tr, int pos, int new_val) {
    if (tl == tr) {
        t[v] = new_val;
    } else {
        int tm = (tl + tr) / 2;
        if (pos <= tm)
            update(v*2, tl, tm, pos, new_val);
        else
            update(v*2+1, tm+1, tr, pos, new_val);
        t[v] = min(t[v*2] , t[v*2+1]);
    }
}


void solve(int tc)
{
    int n, m; cin >> n >> m;
    map<int , ott > mpp;
    for(int i = 1; i<=n; i++)
        cin >> a[i],
        mpp[a[i]].insert(i);
    build(1, 1, n);
    while(m--){
        int t, l, r; cin >> t >> l >> r;
        l++;
        if(t == 1){
            mpp[a[l]].erase(l);
            a[l] = r;
            mpp[a[l]].insert(l);
            update(1,1,n,l,r);
        }
        else{
            int m = sum(1,1,n,l,r);
            int posr = mpp[m].order_of_key(r+1);
            int posl = mpp[m].order_of_key(l);
            cout <<m << " " << abs(posr - posl) << '\n';
        }
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
