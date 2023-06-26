//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200015;
vector<int> p, tom[N];
vector< vector <int> > ans;
void dfs(int ind, int par){
    p.push_back(ind);
    bool ok= true;
    for(auto i: tom[ind]){
        if(i == par)continue;
        ok=false;
        dfs(i,ind);
    }
    if(ok)
        ans.push_back(p),p.clear();
}


void solve()
{
    int n, r; cin >> n;
    ans.clear();p.clear();
    for(int i =0; i<= n+2; i++)
        tom[i].clear();
    for(int i = 1; i<=n; i++){
        int x; cin >> x;
        if(i == x)r = i;
        else{
            tom[i].push_back(x);
            tom[x].push_back(i);
        }
    }
    dfs(r, 0);
    cout << ans.size() << endl;
    for(auto i: ans){
        cout << i.size() << endl;
        for(auto j: i)cout << j << " ";
        cout<< endl;
    }
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
