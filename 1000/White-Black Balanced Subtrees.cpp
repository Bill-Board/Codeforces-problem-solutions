//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=4010;
int n, w[N],b[N], ans;
string s;
vector<int>tom[N];
void dfs(int ind, int par){
    int bl = 0, wh = 0;
    for(auto i: tom[ind]){
        if(i == par)continue;
        dfs(i, ind);
        w[ind] +=  w[i];
        b[ind] +=  b[i];
    }
    w[ind] +=  (s[ind-1]=='W');
    b[ind] +=  (s[ind-1]=='B');
    if(w[ind] == b[ind])ans++;
}

void solve()
{
    int n; cin >> n;
    for(int i = 0; i<=n+2; i++){
        tom[i].clear();
        w[i]=b[i]=0;
    }
    for(int i =2; i <= n; i++){
        int x;cin >> x;
        tom[x].push_back(i);
        tom[i].push_back(x);
    }
    cin >> s;
    ans = 0;
    dfs(1,0);
    cout << ans << endl;
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
