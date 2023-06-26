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
    vector<ll> pre(n+2, 0);
    for(int i = 1; i<=n; i++){
        cin >> pre[i];
        pre[i] += pre[i-1];
    }

    bool zero = 0;
    if(pre[n]!=0){
        cout << "No\n";
        return;
    }
    for(int i = 1; i<=n ; i++){
        if(pre[i] < 0){
            cout << "No\n";
            return;
        }
        if(pre[i]==0)zero = 1;
        else if(zero){
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
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
