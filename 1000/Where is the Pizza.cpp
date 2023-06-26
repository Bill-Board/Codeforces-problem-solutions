//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod = 1e9+7;
void solve()
{
    int n ; cin >> n;
    vector<int> a(n+1), b(n+1), c(n+1),p(n+1), pos(n+1), visi(n+2,0);
    for(int i = 1; i<=n; i++)
        cin >> a[i], pos[a[i]] = i;
    for(int i = 1; i<=n; i++)
        cin >> b[i];
    for(int i = 1; i<=n; i++){
        cin >> c[i];
        p[a[i]] =b[i];
    }
    ll cr_h = 1;
    for(int i =1; i<=n; i++){
        int val =a[i];
        if(visi[i])continue;
        ll ans = 2, cnt= 0;;
        do{
            cnt++;
            visi[ pos[ val ] ] = 1;
            if(c [ pos[ val ] ])ans  = 1;
            val = p[val];
        }while(!visi[ pos[ val ] ]);
        if(cnt == 1 and ans ==2) ans--;
        cr_h = (cr_h * ans) % mod;
    }
    cout <<  cr_h << endl;
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
