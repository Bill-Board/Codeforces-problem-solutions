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
typedef long long ll;
const int N=200005;
#define pii pair<int, int>
typedef tree< int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> ott;
typedef tree<pii,null_type,less<pii>,rb_tree_tag,tree_order_statistics_node_update> ordered_multiset;
/// find_by_order(k)  kth index a ki ache, pointer return korbe.
/// order_of_key(x)  x kon position a ache , oita bole dibe
void solve()
{
    int n;
    ordered_multiset ott;
    cin >> n;
    vector<int> a(n);
    map<int, int> mpp;
    for(auto &i: a){
        cin >> i;
        ott.insert({i,++mpp[i]});
    }
//    for(auto i: ott){
//        cout << i.first << " " << i.second << endl;
//    }cout << endl;
    ll cr_h = 0;
    for(auto i: a){

//        for(auto j: ott){
//        cout << j.first << " " << j.second << endl;
//        }

        int kot = ott.order_of_key({i, mpp[i]});
        //cout << kot << endl;
        ott.erase({i,mpp[i]});
        mpp[i]--;
        cr_h+=kot;
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
