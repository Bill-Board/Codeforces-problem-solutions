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

ll fact[N+10];
void precal()
{
    fact[0]=1;
    for(ll i = 1; i<N; i++) fact[i]=(fact[i-1]*i)%mod;
}


void solve(int tc)
{
    int n; cin >>n;
    ll cr_h = 0, val = 2 * (n - 1);
    for(int i = 1; i<n; i++, val-=2){
        cr_h += fact[n]*val;
        cr_h %= mod;
    }
    cout << cr_h << '\n';
}



signed main()
{
    precal();
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
