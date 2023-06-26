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


#define pii pair<int , int>

bool sort2val(const pii &a,const pii &b)
{
    if(a.first==b.first)return a.second>b.second;
    return a.first>b.first;
}

typedef tree< int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> ott;
typedef tree<pii,null_type,less<pii>,rb_tree_tag,tree_order_statistics_node_update> ordered_multiset;
/// find_by_order(k)  kth index a ki ache, pointer return korbe.
/// order_of_key(x)  x kon position a ache , oita bole dibe


void solve()
{
    int n, k, o = 0;
    cin >> n >> k;
    ott s;
    vector<int> a(n), vis(n, 0);
    vector <pii> vp;
    for(int i = 0; i<n; i++)
        cin >> a[i], vp.push_back({a[i],i});
    if(n == k){
        cout << 0 << endl;
        return;
    }

    sort(vp.begin(),vp.end(),sort2val);
    priority_queue <pii, vector <pii>, greater<pii> > pq;
    for(int i =0; i<k; i++)
        vis[vp[i].second] =1;
    int kot  = 0;ll ans  = 0;
    for(int i = 0; i<n; i++){
        if(vis[i] == 1){
            pq.push({a[i]+kot, i});
            s.insert(i);
            kot++;
        }
        else
            ans += a[i]+kot;
    }
//    for(auto i: s)
//        cout << i << " ";cout << endl;
//    while(pq.size())
//        cout << pq.top().first << " ", pq.pop();cout << endl;

    for(int i = 0; i<n; i++)if(vis[i]== 0){
        kot = s.order_of_key(i) + a[i];
        //cout << i << " ind " << kot << endl;
        if(pq.top().first<kot){
            int ind = pq.top().second;
            vis[ind] = 0;
            s.erase(s.find(ind));
            pq.pop();
            pq.push({kot, i});
            s.insert(i);
            vis[i] = 1;
        }
    }
    ll cr_h = 0;
    kot = 0;
    for(int i = 0; i<n; i++){
        if(vis[i] == 0)
            cr_h += (a[i] + kot);
        else kot++;
    }
    ll sum =0;
    n = max(0, n - k);
    for(int i = 0; i<n; i++)
        sum += a[i];
    cout << min({ans, sum,cr_h}) << endl;
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
