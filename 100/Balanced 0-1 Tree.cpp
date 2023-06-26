//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=300105;
vector<int> tom[N];

int n, dis[N], po[N], pz[N], ok = 0, p[N], okk = 0;

void dfs(int ind, int par){
    dis[ind] = 1;
    p[ind]=par;
    for(auto i: tom[ind]){
        if(i == par)
            continue;
        dfs(i, ind);
        dis[ind]+= dis[i];
    }
    int hlf= n/2;
    if(hlf == dis[ind])
        ok = ind;
    if(hlf+1 == dis[ind])
        okk = ind;
}


void solve()
{
    cin >> n;ok=okk=0;
    bool ki = true;
    for(int i = 1; i<=n ; i++){
        cin >> po[i];
        pz[i] = 1 - po[i];
        po[i] += po[i-1];
        pz[i] += pz[i-1];
        tom[i].clear();
        dis[i] = 0;
    }
    for(int i = 1; i<n; i++){
        int x, y; cin >> x >> y;
        tom[x].push_back(y);
        tom[y].push_back(x);
        if(abs(x-y)>1)
            ki =false;
    }
    int leaf = 0;
    for(int i =2; i<=n; i++)
        leaf += tom[i].size()==1;

    if(po[n] == pz[n]){
        cout << 0 << endl;
        return;
    }
    if(ki){
        cout << 1 << endl;
        for(int i = n; i > 0; i--){
            int one = po[i-1] + pz[n] - pz[i-1];
            int zero= pz[i-1] + po[n] - po[i-1];
            if(one == zero){
                cout << i << endl;
                break;
            }
        }
        return;
    }
    if(leaf >= n/2)
    {
        cout << n/2 << endl;
        int k  = n/2;
        for(int i = 2; i<=n; i++)
            if(tom[i].size() == 1 and k>0)
                cout << i << " ", k--;
        cout << endl;
        return;
    }
    dfs(1, 0);
    if(ok)
        cout << 1 << endl << ok << endl;
    else{
        vector<int> tr;
        for(auto i: tom[okk])
            if(i != p[okk])
            tr.push_back(i);
        cout << tr.size() << endl;
        for(auto i: tr)
            cout << i << " ";
        cout << endl;
    }

}



signed main()
{
    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
