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
    string s, t;
    cin >> s >> t;
    int cnt1 = 0;
    for(auto i: s)
        cnt1 += i =='a';

    int cnt2 = 0;
    for(auto i: t)
        cnt2 += i == 'a';
    if(cnt2 > 1){
        cout << -1 << endl;
        return;
    }
    if(cnt2 == 1){
        if(t.size()>1)
            cout << -1 << endl;
        else
            cout << 1<< endl;
        return;
    }
    if(cnt1 > 62)
        cout << -1 << endl;
    else{
        ll ans = (1ll << cnt1);
        cout << ans << endl;
    }
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
