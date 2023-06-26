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
    int n, x;cin>> n >> x;
    int k = (n+1)/2;
    if(k<x){
        cout << -1 << '\n';
        return;
    }
    string ans(n,'0');
    for(int i = 0; i<x; i++)
        ans[i] = char(i+'a');
    for(int i= x;i<k;i++)
        ans[i] = 'a';
    for(int i = 0; i<=k; i++)
        ans[n-i-1]=ans[i];
    cout << ans << '\n';


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
