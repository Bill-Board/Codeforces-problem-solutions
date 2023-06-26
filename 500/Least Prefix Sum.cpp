//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<ll,int>;

const int N=200005;
ll mod= 1e9+7;


void solve(int tc)
{
    int n, m; cin >> n >> m;
    vector<ll> a(n), pre(n,0);
    vector<pii> p;
    for(auto &i: a)
        cin >> i;
    ll cnt = 0, sum = 0;
    if(a[m-1]>0){
        cnt++;
        a[m-1] = - a[m-1];
    }
    for(int i = m; i<n; i++){
        if(sum + a[i]<0)
            a[i] = -a[i], cnt++;
        sum += a[i];
    }
    pre[0] = a[0];
    for(int i = 1; i<m; i++)
        pre[i] += pre[i-1];
    for(int i = 0; i<m ; i--){
        if(pre[i] < pre[m-1]){
            p.push_back({pre[i], i});
        }
    }
    sort(p.begin(),p.end());
    sum = 0;
    int pos = -1
    for(auto i: p){
        int ind = i.second; ll val = i.first;
        if(ind < pos) continue;

    }


}



signed main()
{
    int test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
