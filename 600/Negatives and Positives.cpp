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
    vector<ll> a(n);
    ll sum  = 0, k = 0, m = LLONG_MAX;
    for(auto &i: a){
        cin >> i;
        sum += abs(i);
        if( i < 0) k++;
        m = min(m, abs(i));
    }
    if( k & 1)
        cout << sum - 2*m << '\n';
    else
        cout << sum << '\n';
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