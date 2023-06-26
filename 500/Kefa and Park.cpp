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
vector<int> g[N];
int cat[N], k;

int dfs(int ind, int par){
    if(cat[ind]) cat[ind] += cat[par];
    int c = 0, p = 0;
    for(auto i: g[ind]){
        if(i == par) continue;
        p = 1;
        c += dfs(i, ind);
    }
    if(p == 0 and cat[ind] <= k)
        c++;
    if(cat[ind] <= k) return c;
    else return 0;
}

void solve(int tc)
{
    int n;cin >> n >> k;
    for(int i = 1; i<=n; i++)
        cin >> cat[i];
    for(int i = 0; i<n-1; i++){
        int x, y; cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    cout << dfs(1, 0) << '\n';
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
