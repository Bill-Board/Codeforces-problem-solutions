//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=200005;
ll mod= 1e9+7;

void solve(int tc)
{
    int n; cin >> n;
    vector<int> a(n+1), sufze(n+2), preon(n+2);
    for(int i = 1; i<=n; i++){
        cin >> a[i];
        if(a[i])
            preon[i]++;
        else
            sufze[i]++;
        preon[i] += preon[i-1];
    }
    for(int i = n; i>0; i--)
        sufze[i] += sufze[i+1];

//    for(auto i: preon)
//        cout << i << " ";cout << '\n';
//    for(auto i: sufze)
//        cout << i << " ";cout << '\n';

    ll ans = 0;
    for(int i = 1; i<=n; i++)
        if(a[i]==1) ans += sufze[i+1];
    //cout << ans << '\n';
    ll cr_h = ans;

    for(int i = 1; i<=n; i++){
        if(a[i]){ /// 1
            ll ek = ans - sufze[i+1] + preon[i-1];
            cr_h = max(cr_h, ek);
        }
        else{/// 0
            ll ek = ans - preon[i-1] + sufze[i+1];
            cr_h = max(cr_h, ek);
        }
    }
    cout << cr_h << '\n';

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
