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
    int n; cin >> n;
    vector<int> a(n+1, 0), b(n+1, 0);
    for(int i = 1; i<=n; i++)
        cin >> a[i];
    for(int i = 1; i<=n; i++)
        cin >> b[i];
    for(int i = 1; i<=n; i++)
        cout << b[i] - max(b[i-1], a[i]) <<  " \n"[i==n];

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
