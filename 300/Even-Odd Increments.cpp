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

void solve(int tc){

    int n, q; cin >> n >> q;
    vector<ll> a(n);
    ll sumo = 0, sume = 0, elen = 0, olen = 0;
    for(auto &i: a){
        cin >> i;
        if(i & 1)
            sumo+=i, olen++;
        else
            sume+=i, elen++;
    }
    while(q--){
        ll t, x; cin >> t >> x;
        if(t == 0){
            sume += (x * elen);
            if(x&1){/// sob odd hoye jabe
                sumo += sume;
                olen += elen;
                sume = elen = 0;
            }
        }
        else{
            sumo += (x * olen);
            if(x&1){/// sob odd hoye jabe
                sume += sumo;
                elen += olen;
                sumo = olen = 0;
            }
        }
        cout << sume+sumo << '\n';
    }

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
