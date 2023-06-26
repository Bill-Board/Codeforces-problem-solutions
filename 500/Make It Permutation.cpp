//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=200005;
ll mod= 1e9+7;


void solve(int tc)
{
    ll n, c, d; cin >> n >> c >> d;
    map<ll, ll> mpp;
    vector<ll> a(n);
    for(auto &i: a){
        cin >> i;
        mpp[i]++;
    }
    ll l = n - mpp.size();
    ll cost = LLONG_MAX;
    for(ll i = l; i<=n+1; i++){
        if(mpp.empty()){
            cost = min(cost, i*c+d);
        }
        else{
            int q = (mpp.rbegin()->first);
            if(q == mpp.size())
                cost = min(cost, i*c);
            else
                cost = min(cost, i*c+(q-mpp.size())*d);
            mpp.erase(mpp.find(q));
        }
    }
    cout << cost << '\n';
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
