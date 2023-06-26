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
    int n; cin >> n;
    vector<int> a(n), last(n+1), dp(n+1);
    for(auto &i: a)
        cin >> i;

    for(int i = 1; i<=n; i++){
        int val = a[i-1];
        dp[i] = dp[i-1];
        if(last[val]){
            dp[i] = max(dp[i], dp[last[val] - 1] + i - last[val] + 1);
            dp[i] = max(dp[i], dp[last[val]] + i - last[val]);
        }
        last[val] = i;
    }
    cout << dp[n] << '\n';
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
