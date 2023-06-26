//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=205;
ll mod= 1e9+7;
map<int, int> lvl;
vector<int> tom[N];
void dfs(int ind, int par){
    for(auto &i: tom[ind]){
        if(i == par)continue;
        lvl[i] = lvl[ind] + 1;
        dfs(i, ind);
    }
}

void solve(int tc)
{
    int n, m; cin >> n >> m;
    lvl.clear();
    for(int i = 0; i<=n; i++)
        tom[i].clear();
    for(int i = 0; i<m; i++){
        int x, y; cin >> x >> y;
        tom[x].push_back(y);
        tom[y].push_back(x);
    }
    int lf;
    for(int i = 1; i<=n; i++)
    if(tom[i].size() == 1){
        lf = i;
    }
    dfs(lf, 0);
    int rt;
    for(auto i: lvl){
        //cout << i.first << ' ' << i.second << '\n';
        if(i.second == 2 and 1 < tom[i.first].size())
            rt = i.first;
    }

    //cout << rt << '\n';
    int x = tom[rt].size(), y = tom[tom[rt][0]].size() - 1;
    cout << x << " " << y << '\n';



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
