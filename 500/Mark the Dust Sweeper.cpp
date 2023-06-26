//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

void solve()
{
    int n; cin >> n;
    vector<ll> a(n), b;
    bool ok =false;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        if(a[i])ok=true;
        if(ok and a[i]==0)b.push_back(i);
    }
    reverse(b.begin(),b.end());
    ll cr_h = 0;
    for(int i = 0; i<n-1; i++){
        if(a[i]==0)continue;
        while(b.size() and a[i]>0){
            a[i]--;
            cr_h++;
            a[b.back()]++;
            b.pop_back();
        }
        if(b.empty() or a[i]>0)
            cr_h += a[i];
    }
    cout << cr_h << '\n';

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
