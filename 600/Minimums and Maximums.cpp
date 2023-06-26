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
    int l1,r1,l2,r2;
    cin >>l1 >> r1 >> l2 >> r2;
    int ans = l1 + l2;
    for(int i = min(l1, l2); i<= max(r1,r2); i++){
        if(l1 <= i and i <= r1 and l2 <= i and i<=r2)
            ans = min(ans, i);
    }
    cout << ans << endl;
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
