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
int n, visi[N], ans[N], cnt[N];

bool dfs(int ind, int par, int kot){
    if(ans[ind] != -1)
        return ans[ind] == kot;
    ans[ind] = kot;
    visi[ind] = 1;
    bool ok = true;
    for(auto i: tom[ind]){
        if(i == par)continue;
        ok &= dfs(i, ind, kot^1);
    }
    return ok;
}


void solve()
{
    cin >> n;
    for(int i = 0; i<=n; i++){
        tom[i].clear();ans[i] = -1; cnt[i] = visi[i]=0;
    }

    for(int i = 0; i<n; i++){
        int x, y; cin >> x >> y;
        cnt[x]++,cnt[y]++;
        tom[x].push_back(y);
        tom[y].push_back(x);
    }
    for(int i = 1; i<=n; i++){
        if(visi[i] == 1)continue;
        //cout << "i " << i << '\n';
        if(!dfs(i, 0, 0)){
            cout << "NO" << '\n';
            return;
        }
    }
    for(int i = 1; i<=n; i++)
        if(visi[i]==0 or cnt[i] != 2){
            cout << "NO" << '\n';
                return;
        }
    cout << "YES" << '\n';
}



signed main()
{
     int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
