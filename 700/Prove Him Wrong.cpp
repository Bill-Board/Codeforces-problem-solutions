//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

void solve()
{
    ll n, len = 1e9 ;
    cin >> n;
    vector< ll > a;
    for(ll i = 1, val = 1; i<=n ; i++, val *= 3){
        if(val>len){
            cout << "NO" << endl;
            return;
        }
        a.push_back(val);
    }
    cout << "YES" <<endl;
    for(auto i : a)cout << i << " ";
    cout << endl;
}



signed main()
{
    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
