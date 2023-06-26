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


void solve(int tc)
{
    int m; cin >> m;
    vector<int> a[m];
    for(int i = 0; i<m; i++){
        int n; cin >> n;
        for(int j = 0; j<n; j++){
            int x; cin >> x;
            a[i].push_back(x);
        }
    }
    set<int> s;
    vector<int> ans;
    for(int i = m - 1; 0 <= i; i--){
        bool ok = true;
        for(auto j: a[i]){
            if(s.find(j) == s.end() and ok){
                ans.push_back(j);
                ok = false;
            }
            s.insert(j);
        }
        if(ok){
            cout << -1 << '\n';
            return;
        }
    }

    for(int i = m-1; 0 <= i ; i--)
        cout << ans[i] << " \n"[i==0];
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
