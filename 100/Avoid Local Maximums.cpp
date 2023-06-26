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

void solve()
{
    v99 n;
    cin >> n;
    vll a(n+2), cnt;
    for(v99 i=1; i<=n ; i++)
        cin >> a[i];
    for(v99 i= 2; i<n ; i++){
        if(a[i-1]<a[i] and a[i]>a[i+1])
            cnt.push_back(i);
    }
    v99 cr_h =0;
    for(v99 i=0; i < cnt.size() ; )
    {
        if(i+1<cnt.size())
        {
            if(cnt[i]+2==cnt[i+1])
            {
                v99 val=max(a[cnt[i]], a[cnt[i+1]]);
                a[cnt[i] +1 ] = val;
                i+=2;
            }
            else
            {
                a[cnt[i]] = max(a[cnt[i] +1] , a[cnt[i] - 1] );
                i++;
            }
        }
        else
        {
            a[cnt[i]] = max(a[cnt[i] +1] , a[cnt[i] - 1] );
                i++;
        }
        cr_h++;
    }
    cout << cr_h <<ses;
    for(v99 i=1 ; i<=n ;i++)
        cout << a[i] << whp ses[i==n];
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
