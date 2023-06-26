//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
const int N=200005;

void solve()
{

    ll n , x ;
    cin >> n >> x;
    map<ll, int> dist;
    queue<ll> q;
    q.push(x);
    dist[x] = 1;
    while(q.size()){
        ll k = q.front();q.pop();
        string s =to_string(k);
        if(s.size() == n){
            cout << dist[k] - 1<< endl;
            return;
        }
        for(auto i: s){
            if(i < 2)continue;
            ll kot = k * (i - '0');
            if(!dist[kot])
                dist[kot] = dist[k] + 1,
                q.push(kot);
        }
    }
    cout << -1 << endl;
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
