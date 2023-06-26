//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma comment(linker, "/STACK:268435456");
using namespace std;
using namespace __gnu_pbds;

using ll = long long;
using pii= pair<int,int>;

const int N=200005;
ll mod= 1e9+7;

typedef tree< ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> ott;
/// find_by_order(k)  kth index a ki ache, pointer return korbe.
/// order_of_key(x)  x kon position a ache , oita bole dibe


void solve(int tc)
{
    int n; cin >> n;
    vector<ll> a(n);
    for(auto &i: a)
        cin >> i;
    ll cr_h = 0;
    for(int i = 0; i<n; i++){
        int l = n+1, r = -1;
        ott s;
        for(int j = i; j<n; j++){
            s.insert(a[j]);
            int pos = s.order_of_key(a[j]);
            cout << "i j " <<i << " " << j << " \n";
            if(pos == j - i){
                cr_h += max(0, r - l);
                continue;
            }
            cout << pos << ' ' << j - i << '\n';
//            l = min(l, pos);
//            r = max(r, j - i);
//            cr_h += (r - l);
//            cout << l << ' ' << r << '\n';
        }
    }
    cout << cr_h << '\n';
}



signed main()
{
    int test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
