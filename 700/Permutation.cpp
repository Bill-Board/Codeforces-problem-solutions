//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

void solve()
{
    int n; cin >> n;
    vector<int>ans, vis(n+3,0);
    for(int i = 1; i<=n; i++){
        if(vis[i]==1)continue;
        for(int j = i;j<=n; j*=2){
            if(vis[j]==1)continue;
            ans.push_back(j);
            vis[j]=1;
        }
    }
    cout << 2 << '\n';
    for(int i = 0; i<n; i++)
        cout << ans[i] << " \n"[i==n-1];
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
