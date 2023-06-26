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


void solve(int tc)
{
    int n;
    vector<int> ans[N];
    cin >> n;
    for(int i = 1; i<=n; i++)
        ans[i].push_back(i);
    for(int i = 1; i<=n; i++)
        for(int j = 1; j<=n; j++){
            char c; cin >> c;
            if(c=='1'){
                ans[j].push_back(i);
                ans[i].push_back(j);
            }
        }
    for(int i = 1; i<=n; i++){
        cout << ans[i].size() << ' ';
        for(auto j: ans[i])
            cout << j << " ";
        cout << '\n';
    }
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
