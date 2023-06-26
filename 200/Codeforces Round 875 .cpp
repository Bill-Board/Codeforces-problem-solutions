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
map<int, int> lv;
map<pii, int> q;
vector<int> g[N];
void dfs(int ind, int par){
    for(auto i: g[ind]){
        if(i == par) continue;
        int ch = q[{ind, i}], pa = q[{ind, par}];
        if(ch > pa)
            lv[i] = lv[ind];
        else
            lv[i] = lv[ind] + 1;
        dfs(i, ind);
    }
}

void solve(int tc)
{
    int n, cnt = 0; cin >> n;
    lv.clear();q.clear();
    map<int, int> mpp;
    for(int i = 1; i<=n; i++)
        g[i].clear();
    q[{1,0}] = N;
    q[{0, 1}] = N;
    for(int i = 0; i<n-1; i++){
        int x, y; cin >> x >> y;
        q[{x,y}] = i + 1;
        q[{y,x}] = i + 1;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    dfs(1, 0);
    for(auto i: lv)
        cnt = max(cnt, i.second);
    cout << cnt << '\n';
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
