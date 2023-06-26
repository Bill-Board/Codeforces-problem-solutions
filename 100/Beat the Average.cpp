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
    int n, m, x;
    cin >> n >> m >> x;

    if(m == x){
        cout << 0 << endl;
        return;
    }
    int kot = (x*n)/(x+1);
    cout << min(n, kot) << endl;

//    int l = 0, r = n, ans =0;
//    while(l <= r){
//        int mid = (l + r)/2;
//        if(mid*(x+1) < x*n)l = mid+1, ans = mid;
//        else r = mid-1;
//    }
//    cout << ans << endl;
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
