//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=2105;
ll mod= 1e9+7;
vector<ll>a[N];
vector<ll> b;
map<int, int> ek, dui;

pii berkori(int val){
    if(val == 1) return {1,1};
    int pos = lower_bound(b.begin(),b.end(), val) - b.begin();
    int i = pos+1, j = val - b[pos-1];
    return {i,j};
}

void solve(int tc)
{
    ll n; cin >> n;
    ll lft = n, rgt = n, ans = 1;
    while(lft != 1){
        pii p = berkori(lft), q  = berkori(rgt);
        ans += a[q.first][q.second] - a[p.first][p.second-1];
        if(ek[lft]){
            lft = lft - p.first + 1;
        }
        else
            lft = lft - p.first;
        if(dui[rgt]){
            rgt = rgt - q.first;
        }
        else
            rgt = rgt - q.first + 1;
    }
    cout << ans  << '\n';
}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    ll val = 0;
    for(ll i = 1; i<=2025; i++){
        a[i].push_back(0ll);
        ek[val+1]++;
        for(int j = 0; j<i; j++){
            val++;
            a[i].push_back(a[i].back()+(val*val));
        }
        b.push_back(val);

        dui[val]++;
    }
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
