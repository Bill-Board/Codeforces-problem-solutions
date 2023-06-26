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
    ll n, m, sum =0;
    cin >> n >> m;
    map <ll , ll > mpp;
    mpp[sum]++;
    for( int i = 0; i < n ; i++)
    {
        ll x;
        cin >> x;
        sum =(sum + x)% m;
        mpp[sum]++;
    }
    ll cr_h = 0;
    for(auto i : mpp)
        cr_h += i.second * (i.second -1)/2ll;
    cout << cr_h << endl;


}



signed main()
{

    ll test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
