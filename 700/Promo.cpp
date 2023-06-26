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
    int n, q;
    cin>> n >> q;
    vector<ll>a(n+1);
    for(int i =1; i<=n ; i++)
        cin >> a[i];
    sort(a.begin(),a.end());
    for(int i = 1; i<=n; i++)
        a[i]+=a[i-1];
    while(q--){
        int x, y;
        cin>> x >> y;
        cout << a[n- x + y] - a[n-x] << '\n';
    }
}



signed main()
{
    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
