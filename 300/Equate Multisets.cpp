//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

void solve()
{
    int n; cin >> n;
    vector<ll> a(n), b(n);
    for(auto &i: a){
        cin >> i;
        while(i%2 == 0)
            i/=2;
    }
    sort(a.begin(),a.end(),greater<>());
    for(auto &i : b){
        cin >> i;
        while(i <= a.front())
            i <<= 1;
    }
    map<ll, ll> mpp;
    for(auto i: b){
        ll val = i;
        while(val){
            mpp[val]++;
            val >>= 1;
        }
    }
    for(auto i: a){
        if(mpp[i] < 1){
            cout << "NO" << '\n';
            return;
        }
        ll val = i;
        while(val){
            mpp[val]--;
            val >>= 1;
        }
    }
    cout << "YES" << '\n';
}



signed main()
{
     int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
