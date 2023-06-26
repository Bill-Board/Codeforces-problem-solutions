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
    int n,m; cin >> n >> m;
    vector<string> a(n);
    for(auto &i: a)cin >> i;
    int cr_h = INT_MAX;
    for(int i = 0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int sum = 0;
            for(int k = 0; k<m; k++)
                sum += abs(a[i][k]-a[j][k]);
            cr_h = min(cr_h, sum);
        }
    }
    cout << cr_h << endl;
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
