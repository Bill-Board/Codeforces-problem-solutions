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
    int n, k;
    string s;
    cin >> n >> k >> s;
    vector<int> pre(n+3,0);
    for(int i =1; i<=n; i++)
        pre[i]= (s[i-1] == 'W'), pre[i] += pre[i-1];
    int cr_h = INT_MAX;
    for(int i = 1, j = k; j<=n ; i++, j++)
        cr_h = min(cr_h, pre[j]-pre[i-1]);
    cout << cr_h << '\n';
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
