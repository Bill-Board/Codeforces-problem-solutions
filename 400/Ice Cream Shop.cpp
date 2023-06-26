//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
vector <ll> p, x;

ll a_sum(int l, int r){
    if(l>=p.size() or l>r)return 0ll;
    ll sum = 0;
    for (int i = l ; i <= min((int)p.size()-1,r); i++)
        sum += p[i];
    cout << sum << endl;
    return sum;
}

void solve()
{
    ll n, m; cin >> n >> m;
    ll cr_h =0;
    p.clear();x.clear();
    p.resize(n);x.resize(m);
    for(auto &i : p)
        cin >> i, cr_h = max(cr_h, i);
    for(auto &i : x)
        cin >> i;
    sort(x.begin(), x.end());
    if(p.front() != 0)cr_h = max(cr_h, a_sum(0, (x.front()-1)/100 ) );
    cr_h = max(cr_h, a_sum(x.back()/100 + 1, (ll)p.size() -1 ) );


    cout << cr_h << endl;





}



signed main()
{
    ll test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
