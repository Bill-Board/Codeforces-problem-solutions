//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;
vector<int> tom[N];
ll n, child[N], ans[N];

ll dfs(int ind, int par){
    ll kot = 1;
    for(auto i: tom[ind]){
        if(i == par)continue;
        kot += dfs(i, ind);
    }
    child[ind] = kot;
    return kot;
}

void dfs2(int ind, int par){
    ll kot = 1, cr_h = 0;
    for(auto i: tom[ind]){
        if(i == par){
            continue;
        }
        cr_h += (child[i]*kot);
        kot += child[i];
        dfs2(i, ind);
    }
    cr_h += (kot * (n - kot));
    ans[ind] = cr_h;
}

void solve()
{
    cin >> n;
    for(int i = 0; i<n-1; i++){
        int x, y; cin >> x >> y;
        tom[x].push_back(y);
        tom[y].push_back(x);
    }
    dfs(1, 0);
//    for(int i = 1; i<=n; i++)
//        cout << child [i] << " \n"[i==n];
    dfs2(1, 0);
    int q;cin>> q;
    while(q--){
        int x;cin >> x;
        cout << ans[x] << "\n";
    }


}



signed main()
{
     int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
