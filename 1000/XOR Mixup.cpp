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
    cin>> n;
    vector<int> a(n+2),pre(n+2,0),suf(n+2,0);
    for(int i = 1; i<=n; i++)
        cin >> a[i], pre[i] =a[i], pre[i]^=pre[i-1];
    for(int i = n; i>0; i--)
        suf[i]=a[i],suf[i]^=suf[i+1];
    for(int i = 1; i<=n; i++)
        if((pre[i-1]^suf[i+1])==a[i]){
            cout << a[i] << '\n';
            return;
        }

}



signed main()
{
     int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
