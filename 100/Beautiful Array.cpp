//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

void solve(int tc)
{
    ll n, k, b, s;
    cin >> n >> k >> b >> s;
    vector<ll> a;
    ll kot = (b+1) * k - 1;
    if(s < k*b){
        cout << -1 << '\n';
        return;
    }
    ll p = min(s, kot);
    a.push_back(p);
    s-=p;
    while(a.size()<n){
        p = min(s, k-1);
        a.push_back(p);
        s-=p;
    }
    if(s){
        cout << -1 << '\n';
        return;
    }
    for(auto i: a)
        cout << i << ' ';cout << '\n';
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
