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
    int n, m;
    cin >> n >> m;
    if(n<m)swap(n,m);
    if(n == 1 and m == 1){
        cout << 0 << endl;
        return;
    }
    if(m == 1 and n-m>1){
        cout << -1 << endl;
        return;
    }
    if(n==m){
        cout << (n-1)*2 << endl;
        return;
    }
    ll ans = (m-1)*2;
    if((n-m)%2==0)
        cout << ans + (n-m)*2  << endl;
    else
        cout << ans + (n-m)*2  -1<< endl;

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
