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
const v99 N=200005;


/// code is here->----------------------------

vll a;
v99 alabu(v99 l, v99 r)
{
    v99 sum = 0, cr_h =0;
    for(v99 i=l;i<=r; i++)
    {
        sum=max(0LL, sum + a[i]);
        cr_h=max(cr_h, sum);
    }
    return cr_h;
}

void solve()
{
    v99 n, x;
    cin >> n >> x;
    a.clear();
    a.resize(n);
    for(auto &i: a)cin >> i;
    v99 val= alabu(0LL, n-1);
    for(auto &i: a) i += x;
    vll ans;
    ans.push_back(alabu(0LL,n-1));
    v99 l=0, r=n-1;
    for(v99 i=0; i < n - 1 ; i++)
    {
        a[l]-=x;
        v99 ek=alabu(0LL, n-1);
        a[l]+=x;

        a[r]-=x;
        v99 dui=alabu(0LL, n-1);
        a[r]+=x;
        if(ek >= dui)
            a[l]-=x, l++, ans.push_back(ek) ;
        else
           a[r]-=x, r--, ans.push_back(dui) ;
    }
    ans.push_back(val);
    reverse(sob(ans));
    for(auto i: ans)cout << i << whp ;
    cout << ses;
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
