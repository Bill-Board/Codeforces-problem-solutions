//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

ll alabu(ll m, vector < ll > a)
{
    ll cn1= 0, cn2 = 0;
    for(auto i: a)
        cn1 += (m - i) % 2,
        cn2 += (m - i) / 2;
    ll cr_h = 0;
    if(cn1 < cn2){
        ll lagbe= (cn2- cn1) /3;
        cn1 += lagbe * 2;
        cn2 -= lagbe;
    }


    if(cn1 > cn2)cr_h = 2 * cn1  - 1;
    else if(cn1 == cn2) cr_h= cn2 * 2;
    else if(cn1 + 1 == cn2) cr_h = cn2 * 2;
    else cr_h = 2*cn1 + 3;

    return cr_h;
}

void solve()
{
    ll n, m=0;
    cin >> n;
    vector < ll > a(n);
    for(auto &i : a)
        cin >> i, m= max(i, m);
    ll cr_h = LLONG_MAX;
    for(int i =m; i<= m+2; i++)
        cr_h = min(cr_h, alabu(i,a));
    cout << cr_h << endl;

}



signed main()
{
    ll test_case=1;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
