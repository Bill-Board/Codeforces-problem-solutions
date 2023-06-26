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
    int n, k; cin >> n >> k;
    vector<ll> a(n+1);
    for(int i =1 ; i<=n; i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    for(int i =1 ; i<=n; i++){
        a[i] += a[i-1];
    }
    ll ans = 0;
    for(int i = 0; i<=k; i++){
        int fst = 2*i, last = k - i;
        ll ek = a[fst] + a[n] - a[n - last];
        ans = max(ans, a[n] - ek);
    }
    cout << ans << '\n';
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
