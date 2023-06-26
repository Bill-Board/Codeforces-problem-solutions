//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;
set<int> s;
vector<int> p, ans, tom[N], kot;
int n, fl = 0;
void dfs(int ind, int par){
    if(fl == 1)return;
    ans.push_back(ind);
    if(ind = p.back()){fl = 1; return;}
    for(auto i: tom[N]){
        if(i == par)continue;
        dfs(i, ind);
    }
    if(fl == 1)return;
    ans.pop_back();kot.push_back(ind);
}

void solve()
{
    int n; cin >> n;
    for(int i= 0; i<n-1; i++){
        int x, y; cin >> x >> y;
        tom[x].push_back(y);
        tom[y].push_back(x);
    }
    int q; cin >> q;
    while(q--){
        int k; cin >> k;
        p.clear();p.resize(k);
        for(auto &i: p)
            cin >> i;
        ans.clear();fl = 0;kot.clear();
        dfs(p.front(), 0);


    }
}



signed main()
{
     int test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
