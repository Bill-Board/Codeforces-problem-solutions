//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
bool isPowerOfTwo (ll x)
{
    /* First x in the below expression is for the case when x is 0 */
    return x && (!(x&(x-1)));
}

void solve()
{
    ll n ;
    cin >> n;
    if(isPowerOfTwo(n)){
        cout << -1 << endl;
        return;
    }
    ll k = 1; n  *= 2;
    while(n % 2 ==0 )
        n /= 2,
        k *=2;
    cout << min(k, n) << endl;
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
