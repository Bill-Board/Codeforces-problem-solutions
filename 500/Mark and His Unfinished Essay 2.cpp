//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;
int n , c, q, l[N], r[N];
map<ll ,ll> rrr, sze;
char ans[N];
string s;
vector<ll> pre;
map<ll, ll > mpp;


ll root(ll val)
{
    while(val!=rrr[val])
    {
        val=rrr[val];
    }
    return val;
}

void dsu(ll x,ll y)
{
    ll xr=root(x),yr=root(y);
    if(xr == yr )return;
    if(sze[xr]>sze[yr])
    {
        rrr[yr]=rrr[xr];
        sze[xr]+=sze[yr];
    }
    else
    {
        rrr[xr]=rrr[yr];
        sze[yr]+=sze[xr];
    }
}



void solve()
{
    pre.clear();mpp.clear();
    cin >>n >> c >> q >> s;
    for(int i = 1; i<=n; i++){
        mpp[i] = rrr[i] = i;
        sze[i] = 1;
    }
    vector< pair<ll, ll> > vp(q);
    pre.push_back(n);
    for(int i = 1; i<=c; i++){
        cin >> l[i] >> r[i];
        dsu(l[i], pre.back()+1);
        pre.push_back(pre.back()+r[i]-l[i]+1);
    }


    for(int i = 0; i<q; i++)
        cin >> vp[i].first, vp[i].second= i;



    sort(vp.begin(),vp.end());
    for(auto i: vp){
        ll ind = i.second, v = i.first;
        while(n < v){
            int pos = lower_bound(pre.begin(),pre.end(),v) - pre.begin();
            int kot = pre[pos-1]+1;
            int dif = v - kot ;
            kot  = root(kot);
            v = kot + dif;
        }
        cout << ind << " v " << v << '\n';
        ans[ind] = s[v-1];
    }
    for(int i = 0;i<q;i++)
        cout << ans[i] << '\n';
}



signed main()
{
     int test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
