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
    ll n; cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    for(auto &i: a)
        cin >> i, sum += i;
    ll g = 0, cr_h = 1;
    for(ll i = 0; i< n-1; i++){
        g += a[i];
        sum -= a[i];
        cr_h = max(cr_h, __gcd(g, sum));
    }
    cout << cr_h << '\n';
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
