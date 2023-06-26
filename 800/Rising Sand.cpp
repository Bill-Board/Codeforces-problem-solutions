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
    int n, k; cin >> n >> k;
    vector<ll> a(n);
    for(auto &i: a)
        cin >> i;
    int kot = 0 ;
    if(k == 1){
        cout << (n-1)/2 << '\n';
        return;
    }
    for(int i = 1; i<n-1; i++)
        if(a[i]>a[i-1]+a[i+1])
            kot++;
    int cnt = 0;
    for(int i = 1; i<n-1; i++){
        if(a[i]>a[i-1]+a[i+1])
            cnt++, i++;
    }
    cout << max(cnt,kot) << '\n';
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
