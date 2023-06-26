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
    ll n = 1; cin >> n;
    vector<ll> a(n+1), dp(n+1, 0);
    for(int i =1; i<=n; i++)
        cin >> a[i];
    dp[0] = 1;
    for(ll i = 1;i<=n; i++){
        if(i - a[i] - 1>=0)
            dp[i] |= dp[i - a[i] -1];
        if(i + a[i]<=n)
            dp[i + a[i]] |= dp[i-1];
    }
    if(dp[n]>0)
        cout << "YES\n";
    else
        cout << "NO\n";


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
