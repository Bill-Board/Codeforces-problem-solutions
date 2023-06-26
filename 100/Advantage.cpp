//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<ll,ll>;

const int N=200005;
ll mod= 1e9+7;

void solve(int tc)
{
    int n; cin >> n;
    vector<pii> vp(n);
    for(int i = 0; i<n; i++){
        cin >> vp[i].first;
        vp[i].second = i;
    }
    sort(vp.begin(), vp.end());
    vector<ll> ans(n);
    for(int i = 0; i<n; i++){
        ll id = vp[i].second;
        if(i!=n-1)
            ans[id] = vp[i].first - vp[n-1].first;
        else
            ans[id] = vp[n-1].first - vp[n-2].first;
    }
    for(auto i: ans)
        cout << i << " ";
    cout << '\n';
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
