//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

void solve(int tc)
{
    int n; cin >> n;
    vector<ll> a(n);
    for(auto &i: a)
        cin >> i;
    sort(a.begin(),a.end());
    cout << a[n-1]+a[n-2]-a[0]-a[1] << '\n';

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
