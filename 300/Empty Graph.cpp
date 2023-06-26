//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

void solve(int tc)
{
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    vector <piar<int ,int> > vp;
    for(int i = 0; i<n; i++)
        cin >> a[i], v.push_back(a[i], i);
    //sort(a.begin(),a.end());
    sort(vp.begin(),vp.end());
    for(int i = 0; i<k; i++)
        a[vp[i].second] = 1e9;
    //sort(a.begin(),a.end());
    //for(auto i: a)cout << i << " ";cout << '\n';
    ll cr_h = 0;
    for(int i = 0; i<n-1; i++)
        //cout << min(a.front()*2, a[i]) << " ",
        cr_h = max(cr_h, min(a.front()*2, a[i]));
    //cout << '\n';
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
