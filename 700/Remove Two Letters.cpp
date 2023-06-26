//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<ll,ll>;

const int N=200005;
ll MOD= 1e9+7;

ll dp[N], pow_[N];
ll dp1[N], pow_1[N];

ll power = 157; /// 157
ll power1 = 167; /// 167

void hashing(string s){
    int n = s.size();

    pow_[0]=1;
    pow_1[0]=1;

    for(int i = 1; i<=n; i++){
        ll val = s[i-1] - 'a' + 1;
        //dp[i] = modAdd(val, modMul(dp[i-1] , power));
        //pow_[i] = modMul(pow_[i-1] , power);
        dp[i] = (val +  dp[i-1] * power) % MOD;
        pow_[i] = (power * pow_[i-1]) % MOD;

        //dp1[i] = modAdd(val, modMul(dp1[i-1] , power1));
        //pow_1[i] = modMul(pow_1[i-1] , power1);
        dp1[i] = (val +  dp1[i-1] * power1) % MOD;
        pow_1[i] = (power1 * pow_1[i-1]) % MOD;
    }
}



pii gethas_sub(int l, int r){
    ll ans = ((dp[r] - dp[l-1] * pow_[r - l + 1])%MOD + MOD ) %MOD;
    ll ans1 = ((dp1[r] - dp1[l-1] * pow_1[r - l + 1])%MOD + MOD ) %MOD;

    ans =(ans + (dp[l-3] * pow_[r-l+1]) % MOD) % MOD;
    ans1 =(ans1 + (dp1[l-3] * pow_1[r-l+1]) % MOD) % MOD;

    //cout << ans << " " << ans1 << '\n';
    return {ans,ans1};
}



void solve(int tc)
{
    int n; cin >> n;
    string s; cin >> s;
    hashing(s);
    set<pii> p;
    for(int i = 1; i+1<=n; i++){
        //string u = s.substr(0,i-1)+s.substr(i+1);
        //cout << i << " " << i+1 << '\n';
        //get_hash(u);
        p.insert(gethas_sub(i+2, n));
    }
    cout << p.size() << '\n';
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
