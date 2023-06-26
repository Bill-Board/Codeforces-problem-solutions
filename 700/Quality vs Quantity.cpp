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
    ll n;
    cin >> n;
    vector < ll > a(n);
    for(auto &i : a)
        cin >> i;
    sort(a.begin(), a.end());
    ll l =0, r=n-1, sumb=0, sumr=0,cntb=0,cntr=0;
    while(l <=r)
    {
        sumb+=a[l++];
        cntb++;
        if(sumb<sumr and cntb>cntr)
        {
            cout <<"YES"<<endl;
            return;
        }
        //cout << sumr << " " <<sumb << " " <<cntr << " " <<cntb << endl;
        if(l>r)break;
        sumr+=a[r--];
        cntr++;
        //cout << sumr << " " <<sumb << " " <<cntr << " " <<cntb << endl<<endl;;
        if(sumb<sumr and cntb>cntr)
        {
            cout <<"YES"<<endl;
            return;
        }
    }
    cout <<"NO" <<endl;
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
