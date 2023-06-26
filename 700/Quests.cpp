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
ll n, c, d;
bool alabu(vector<ll> a, ll k){
    ll l = n + ( k - n + 1), sum = 0;
    for(int cnt = 0, i = 0; cnt < d;i = (i + 1)% l, cnt++)
        if(i < n)
            sum += a[i];
    return c <= sum;
}


void solve(int tc)
{
    cin >> n >> c >> d;
    vector<ll> a(n);
    for(auto &i: a)
        cin >> i;
    sort(a.begin(),a.end(), greater<>());
    ll l = 0, r = 1e18, ans = -1;
    while(l <= r){
        ll mid = (l + r) / 2ll;
        if(alabu(a,mid))
            l = mid + 1, ans = mid;
        else
            r = mid - 1;
    }
    if(ans == 1e18)
        cout << "Infinity\n";
    else if(ans == -1)
        cout << "Impossible\n";
    else
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
