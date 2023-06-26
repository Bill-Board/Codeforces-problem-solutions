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
    ll n, k, g; cin >> n >> k >> g;
    if(k == 0 or g == 2){
        cout << 0 << '\n';
        return;
    }

    ll m = (g-1)/2, total = k*g;
    ll kot = total / m;
    ll ekhn = min(n - 1, kot);
    ll ans = ekhn * m;
    total -= ans;
    n -= ekhn;
    //cout << total << ' ' << n << '\n';
    if(n == 1){
        ll r = (total % g);
        //cout << ans << '\n';
        if(2*r>=g)
            cout << ans - (g - r) << '\n';
        else
            cout << ans +  r << '\n';
    }
    else{
        cout << ans + (total % g) << '\n';
    }
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
