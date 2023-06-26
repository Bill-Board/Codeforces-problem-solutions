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
    int n , mn=INT_MAX;
    cin >> n;
    vector<int> a(n);
    for(auto &i: a)
        cin >> i, mn = min(mn, i);
    ll sum = 0;
    for(auto i: a)
        sum += i-mn;
    cout << sum << endl;
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
