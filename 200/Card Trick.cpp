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
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i: a)
        cin >> i;
    int m, sum =0;
    cin >> m;
    vector<int> b(m);
    for(auto &i: b)
        cin >> i, sum = (sum + i) % n;
    cout << a[sum] << endl;

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
