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
    ll n, xr = 0;
    cin >> n;
    vector <ll> a(n);
    for(auto &i : a)
        cin >> i,
        xr ^= i;
    ll sum = accumulate(a.begin(), a.end(), 0ll);
    if(sum == 2*xr){
        cout << 0 << endl;
        return;
    }
    sum += xr;
    cout << 3 << endl << xr << " 0 " << sum << endl;


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
