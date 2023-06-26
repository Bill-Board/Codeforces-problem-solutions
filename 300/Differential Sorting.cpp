//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU

#include<bits/stdc++.h>
using namespace std;

typedef long long v99;
#define vll    vector<v99>
#define dua ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define i_love_u_huu dua long long tokp;cin >> tokp;while(tokp--)
#define ses   "\n"
#define whp   " "
#define sob(z)  (z).begin(), (z).end()
#define ff first
#define ss second
#define pii pair<v99, v99>
const v99 N=1e18;


/// code is here->----------------------------

void solve()
{
    v99 n;
    cin >> n;
    vll a(n);
    for(auto &i : a) cin >> i;
    if(is_sorted(sob(a)))
    {
        cout << 0 << ses;
        return ;
    }
    if(a[n-2]>a[n-1])
    {
        cout << -1 << ses;
        return ;
    }
    if(a[n-2]-a[n-1]<=a[n-2])
    {
        cout << n-2 << ses;
        for(v99 i =1; i <= (n-2) ; i++)
            cout << i << whp << n-1 << whp << n <<ses;
        return ;
    }
    cout << -1 << ses;
}



signed main()
{
    //dua
    //freopen("data.out","w",stdout);
    //while(1)
    i_love_u_huu
    solve();
    return 0;
}



///  Alhamdulillah...
